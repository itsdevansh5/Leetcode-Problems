class Solution {
public:
    void insertTop3(vector<int>& v, int x) {
        v.push_back(x);
        int i = v.size() - 1;
        while (i > 0 && v[i] > v[i - 1]) {
            swap(v[i], v[i - 1]);
            i--;
        }
        if (v.size() > 3) v.pop_back();
    }

    int maximumSum(vector<int>& nums) {
        vector<int> a0, a1, a2;

        for (int x : nums) {
            if (x % 3 == 0) insertTop3(a0, x);
            else if (x % 3 == 1) insertTop3(a1, x);
            else insertTop3(a2, x);
        }

        int ans = 0;

        if (a0.size() >= 3) ans = max(ans, a0[0] + a0[1] + a0[2]);
        if (a1.size() >= 3) ans = max(ans, a1[0] + a1[1] + a1[2]);
        if (a2.size() >= 3) ans = max(ans, a2[0] + a2[1] + a2[2]);
        if (!a0.empty() && !a1.empty() && !a2.empty())
            ans = max(ans, a0[0] + a1[0] + a2[0]);

        return ans;
    }
};
