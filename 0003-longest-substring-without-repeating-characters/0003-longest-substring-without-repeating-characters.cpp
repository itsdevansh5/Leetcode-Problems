class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastIndex;
    int maxLength = 0, start = 0;
    for (int i = 0; i < s.length(); ++i) {
        char c = s[i];
        if (lastIndex.count(c) && lastIndex[c] >= start) {
            start = lastIndex[c] + 1;
        }
        lastIndex[c] = i;
        maxLength = max(maxLength, i - start + 1);
    }
    return maxLength;
        
        
    }
};