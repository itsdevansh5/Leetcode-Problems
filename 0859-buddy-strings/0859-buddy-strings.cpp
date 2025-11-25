class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size()) return false;

        vector<int> ind;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i])
                ind.push_back(i);
        }

        // Case 1: no mismatches → must check duplicates
        if (ind.size() == 0) {
            vector<int> freq(26, 0);
            for (char c : s) {
                freq[c - 'a']++;
                if (freq[c - 'a'] > 1) return true;  // duplicate exists
            }
            return false; // no duplicate → cannot swap
        }

        // Case 2: exactly two mismatches
        if (ind.size() == 2) {
            swap(s[ind[0]], s[ind[1]]);
            return s == goal;
        }

        // More than 2 mismatches → impossible
        return false;
    }
};
