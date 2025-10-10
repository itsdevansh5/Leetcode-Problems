class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s; 
        
        vector<string> arr(numRows, "");
        int j = 0;
        bool sw = true;  
        
        for(char c : s) {
            arr[j] += c;
            if(j == numRows - 1) sw = false;  
            else if(j == 0) sw = true;       
            
            sw ? j++ : j--;
        }
        
        string output = "";
        for(auto &row : arr) {
            output += row;
        }
        return output;
    }
};
