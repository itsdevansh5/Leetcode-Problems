class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        stringstream ss(num1);
        int Re1,Im1;
        char sign;
        ss>>Re1;
        ss>>sign;
        ss>>Im1;

        ss.clear();
        ss.str("");
        
        ss.str(num2);
        int Re2,Im2;
        ss>>Re2;
        ss>>sign;
        ss>>Im2;

        string output;
        int Re3=0;
        Re3+=(Re1*Re2);
        Re3+=(-1*Im1*Im2);
        int Im3=0;
        Im3+=(Re1*Im2+Re2*Im1);
        output=to_string(Re3)+'+'+to_string(Im3)+'i';
        return output;






        
    }
};