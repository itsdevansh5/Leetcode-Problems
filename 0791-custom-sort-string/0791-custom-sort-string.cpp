class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> freq;
        
        // Count frequency of characters in s
        for (char c : s) {
            freq[c]++;
        }
        
        string result;
        
        // Place characters according to order
        for (char c : order) {
            if (freq.count(c)) {
                result.append(freq[c], c);
                freq.erase(c);
            }
        }
        
        // Append remaining characters
        for (auto &p : freq) {
            result.append(p.second, p.first);
        }
        
        return result;
    }
};
