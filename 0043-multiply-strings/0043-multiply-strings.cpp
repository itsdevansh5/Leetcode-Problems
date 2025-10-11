class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        vector<string> arr;
        int shift = 0; 
        for (int i = num1.size() - 1; i >= 0; i--) {
            int carry = 0;
            string d;
            for (int j = num2.size() - 1; j >= 0; j--) {
                int prod = (num1[i] - '0') * (num2[j] - '0') + carry;
                d.push_back((prod % 10) + '0');
                carry = prod / 10;
            }
            if (carry > 0) d.push_back(carry + '0');

            reverse(d.begin(), d.end());
            d.append(shift, '0'); 
            arr.push_back(d);
            shift++;
        }

        
        string result = "0";

        for (const string &s : arr) {
            result = addStrings(result, s);
        }

        return result;
    }

private:
    
    string addStrings(const string &num1, const string &num2) {
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;
        string sum;

        while (i >= 0 || j >= 0 || carry) {
            int x = i >= 0 ? num1[i--] - '0' : 0;
            int y = j >= 0 ? num2[j--] - '0' : 0;
            int val = x + y + carry;
            sum.push_back((val % 10) + '0');
            carry = val / 10;
        }

        reverse(sum.begin(), sum.end());
        return sum;
    }
};
