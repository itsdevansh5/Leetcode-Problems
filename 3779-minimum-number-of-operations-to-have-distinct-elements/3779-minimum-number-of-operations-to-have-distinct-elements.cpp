class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_set<int> s;
        int i;

        for (i = nums.size() - 1; i >= 0; i--) {
            if (s.count(nums[i]))
                break;
            s.insert(nums[i]);
        }

        int prefix = i + 1;          
        return (prefix + 2) / 3;     
    }
};
