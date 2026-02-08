class Solution {
public:
    string reverseVowels(string s) {
        vector<bool> isVowel(128, false);
        for (char c : "aeiouAEIOU") {
            if (c != '\0') isVowel[c] = true;
        }

        int i = 0, j = s.size() - 1;

        while (i < j) {
            while (i < j && !isVowel[s[i]]) i++;
            while (i < j && !isVowel[s[j]]) j--;

            if (i < j) {
                swap(s[i++], s[j--]);
            }
        }
        return s;
    }
};