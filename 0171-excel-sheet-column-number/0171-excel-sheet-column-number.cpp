class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0; // start with 0
        for(char c : columnTitle) {
            int value = c - 'A' + 1; // convert char to number 1-26
            result = result * 26 + value;
        }
        return result;
    }
};
