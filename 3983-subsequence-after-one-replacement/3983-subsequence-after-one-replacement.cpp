class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int m = s.size(), n = t.size();

        if (m > n) return false;

        vector<int> pref(m), suff(m);

        // pref[i] = position in t where s[0...i] finishes matching
        int j = 0;
        for (int i = 0; i < m; i++) {
            while (j < n && t[j] != s[i]) j++;
            if (j == n) pref[i] = n;
            else {
                pref[i] = j;
                j++;
            }
        }

        // suff[i] = position in t where s[i...m-1] starts matching
        j = n - 1;
        for (int i = m - 1; i >= 0; i--) {
            while (j >= 0 && t[j] != s[i]) j--;
            if (j < 0) suff[i] = -1;
            else {
                suff[i] = j;
                j--;
            }
        }

        // Already a subsequence
        if (pref[m - 1] != n)
            return true;

        // Try replacing each character
        for (int k = 0; k < m; k++) {
            int left = (k == 0) ? -1 : pref[k - 1];
            int right = (k == m - 1) ? n : suff[k + 1];

            if (left+1 < right)
                return true;
        }

        return false;
    }
};