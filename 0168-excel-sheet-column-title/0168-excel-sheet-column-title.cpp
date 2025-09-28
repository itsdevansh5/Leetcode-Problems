class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
    while (columnNumber > 0) {
        columnNumber--;                 // 1-based → 0-based
        int rem = columnNumber % 26;    // 0–25
        ans.insert(ans.begin(), 'A' + rem);
        columnNumber /= 26;
    }
    return ans;
        
    }
};