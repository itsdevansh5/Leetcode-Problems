class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> freq(26, 0);
        for (char c : p) freq[c - 'a']++;

        vector<int> res;
        int need = p.size();
        int i = 0;

        for (int j = 0; j < s.size(); j++) {
            if (freq[s[j] - 'a'] > 0)
                need--;
            freq[s[j] - 'a']--;

            while (j - i + 1 > p.size()) {
                freq[s[i] - 'a']++;
                if (freq[s[i] - 'a'] > 0)
                    need++;
                i++;
            }

            if (need == 0)
                res.push_back(i);
        }
        return res;
    }
};
