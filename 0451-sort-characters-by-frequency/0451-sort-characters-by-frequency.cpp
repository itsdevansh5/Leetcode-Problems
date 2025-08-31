class Solution {
public:
    string frequencySort(string s) {
        vector<int> freq(256, 0);
        for (auto i : s) {
            freq[(int)i]++;
        }

        vector<vector<int>> b(s.size() + 1);
        for (int i = 0; i < 256; i++) {
            if (freq[i] > 0) {
                b[freq[i]].push_back(i);
            }
        }

        string result;
        for (int i = s.size(); i >= 1; i--) { 
            for (auto c : b[i]) {
                result.append(i, (char)c);
            }
        }
        return result;
    }
};
