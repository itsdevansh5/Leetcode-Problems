class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> freq;
        
        for (char c : s) {
            freq[c]++;
        }
        
        string result;
        
        for (char c : order) {
            if (freq.count(c)) {
                result.append(freq[c], c);
                freq.erase(c);
            }
        }
        
        for (auto &p : freq) {
            result.append(p.second, p.first);
        }
        
        return result;
    }
};
