class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int cnt[3] = {0, 0, 0};
        int distinct = 0;
        int i = 0;
        int ans = 0;

        for (int j = 0; j < n; j++) {
            int r = s[j] - 'a';
            if (cnt[r] == 0) distinct++;
            cnt[r]++;

            while (distinct == 3) {
                ans += (n - j);

                int l = s[i] - 'a';
                cnt[l]--;
                if (cnt[l] == 0) distinct--;
                i++;
            }
        }
        return ans;
    }
};
