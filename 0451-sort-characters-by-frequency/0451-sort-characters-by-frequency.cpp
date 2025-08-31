class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (auto i : s) {
            freq[i]++;
        }
        sort(s.begin(), s.end(), [&](char a, char b) {
            if (freq[a] == freq[b]) return a < b;  // If frequencies are same, sort by character
            return freq[a] > freq[b];  // Sort by descending frequency
        });
        return s;
    }
};
