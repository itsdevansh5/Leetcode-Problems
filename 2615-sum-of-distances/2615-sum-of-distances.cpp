class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, vector<int>> mp;
        vector<long long> res(n);

        // store indices
        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        // process each group
        for (auto &it : mp) {
            vector<int> &v = it.second;
            int k = v.size();

            vector<long long> prefix(k, 0);
            prefix[0] = v[0];

            for (int i = 1; i < k; i++) {
                prefix[i] = prefix[i - 1] + v[i];
            }

            for (int i = 0; i < k; i++) {
                long long left = (long long)i * v[i] - (i > 0 ? prefix[i - 1] : 0);
                long long right = (prefix[k - 1] - prefix[i]) - (long long)(k - i - 1) * v[i];
                res[v[i]] = left + right;
            }
        }

        return res;
    }
};