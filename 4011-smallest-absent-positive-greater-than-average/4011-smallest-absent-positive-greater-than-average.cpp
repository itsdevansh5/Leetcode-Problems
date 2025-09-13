class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int sum = 0;
        unordered_set<int> freq;
        int maxv = INT_MIN;

        for (int i : nums) {
            sum += i;
            freq.insert(i);
            maxv = max(maxv, i);
        }

        double avg = static_cast<double>(sum) / nums.size();
        int start = static_cast<int>(avg) + 1;
        if (start < 1) start = 1;

        for (int k = start; ; ++k) {
            if (freq.find(k) == freq.end())
                return k;
        }

        return 1; 
    }
};
