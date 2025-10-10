class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;  // Edge case: single row means no zigzag
        
        vector<string> arr(numRows, "");
        int j = 0;
        bool sw = true;  // true means moving down
        
        for(char c : s) {
            arr[j] += c;
            if(j == numRows - 1) sw = false;  // change direction up
            else if(j == 0) sw = true;        // change direction down
            
            sw ? j++ : j--;
        }
        
        string output = "";
        for(auto &row : arr) {
            output += row;
        }
        return output;
    }
};
