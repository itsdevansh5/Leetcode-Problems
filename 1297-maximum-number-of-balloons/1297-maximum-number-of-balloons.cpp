class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> freq;
        for (char c : text)
            freq[c]++;

        // Required letters for "balloon"
        int b = freq['b'];
        int a = freq['a'];
        int l = freq['l'] / 2; // 'l' appears twice
        int o = freq['o'] / 2; // 'o' appears twice
        int n = freq['n'];

        // The answer is the smallest possible full set
        return min({b, a, l, o, n});
    }
};
