class Solution {
public:
    int rev(int a) {
        int r = 0;
        while (a > 0) {
            r = r * 10 + (a % 10);
            a /= 10;
        }
        return r;
    }

    int countNicePairs(vector<int>& nums) {
        const int mod = 1e9 + 7;
        unordered_map<int, long long> freq;
        long long ans = 0;

        for (int x : nums) {
            int key = x - rev(x);
            ans = (ans + freq[key]) % mod;
            freq[key]++;
        }

        return (int)ans;
    }
};
