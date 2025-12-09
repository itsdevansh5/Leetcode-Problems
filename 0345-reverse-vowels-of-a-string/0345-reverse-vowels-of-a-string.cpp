class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.size() - 1;
        set<char> v = { 'a','e','i','o','u','A','E','I','O','U' };

        while (i < j) {
            while (i < j && v.find(s[i]) == v.end()) i++;
            while (i < j && v.find(s[j]) == v.end()) j--;

            if (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};
