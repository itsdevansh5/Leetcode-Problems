class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
         unordered_map<int,int> freq;
        for(auto i : nums){
            freq[i]++;
        }
        if((freq.find(0) == freq.end()) || freq[0] <= k)
            return nums.size();

        int maxLength = 0;
        int zeroCount = 0;
        int l = 0, r = 0;

        while(r < nums.size()) {
            if(nums[r] == 0)
                zeroCount++;
            
            // Shrink window if zero count exceeds k
            while(zeroCount > k) {
                if(nums[l] == 0)
                    zeroCount--;
                l++;
            }
            
            // Calculate current window size and update max length
            int windowSize = r - l + 1;
            if(windowSize > maxLength)
                maxLength = windowSize;
            
            r++;
        }

        return maxLength;
        
    }
};