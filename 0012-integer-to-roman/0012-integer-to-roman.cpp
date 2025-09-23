class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int,char>m;
        string output;
        m[1000] = 'M';
        m[500] = 'D';
        m[100] = 'C';
        m[50] = 'L';
        m[10] = 'X';
        m[5] = 'V';
        m[1] = 'I';

        int th = num / 1000;
        if (th != 4 && th != 9) {
            output += string(th, m[1000]);
        } else {
            if (th == 4) {
                output += "MV";  // Represent 4000 as MV following your logic
            } else {
                output += "MX";  // Represent 9000 as MX following your logic
            }
        }
        num = num - (th * 1000);

        int hu = num / 100;
        num = num - (hu * 100);

        if (hu != 4 && hu != 9) {
            if (hu >= 5) {
                output += m[500];
                output += string(hu - 5, m[100]);
            } else {
                output += string(hu, m[100]);
            }
        } else {
            if (hu == 4) {
                output += "CD";
            } else {
                output += "CM";
            }
        }

        int te = num / 10;
        num = num - (te * 10);

        if (te != 4 && te != 9) {
            if (te >= 5) {
                output += m[50];
                output += string(te - 5, m[10]);
            } else {
                output += string(te, m[10]);
            }
        } else {
            if (te == 4) {
                output += "XL";
            } else {
                output += "XC";
            }
        }

        int on = num;

        if (on != 4 && on != 9) {
            if (on >= 5) {
                output += m[5];
                output += string(on - 5, m[1]);
            } else {
                output += string(on, m[1]);
            }
        } else {
            if (on == 4) {
                output += "IV";
            } else {
                output += "IX";
            }
        }

        return output;
    }
};
