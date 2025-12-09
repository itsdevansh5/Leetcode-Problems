class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        long long mod = 1e9 + 7;

        unordered_map<int,int> right;
        for (int x : nums)
            right[x]++;

        unordered_map<int,int> left;
        long long count = 0;

        for (int x : nums) {
            right[x]--;

            long long a = left[2 * x]%mod;
            long long b = right[2 * x]%mod;

            count = (count + (a * b) % mod) % mod;

            left[x]++;
        }

        return (int)count;
    }
};
