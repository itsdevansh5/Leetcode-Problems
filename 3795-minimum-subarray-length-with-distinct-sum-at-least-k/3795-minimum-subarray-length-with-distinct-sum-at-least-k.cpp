class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int n = nums.size();

       

        unordered_map<int,int> freq;
        long long distinctSum = 0;

        int i = 0;
        int minl = INT_MAX;

        for (int j = 0; j < n; j++) {

          
            if (freq[nums[j]] == 0) {
                distinctSum += nums[j];
            }
            freq[nums[j]]++;

        
            while (distinctSum >= k) {
                minl = min(minl, j - i + 1);

                freq[nums[i]]--;
                if (freq[nums[i]] == 0) {
                    distinctSum -= nums[i];
                }
                i++;
            }
        }

        return minl == INT_MAX ? -1 : minl;
    }
};