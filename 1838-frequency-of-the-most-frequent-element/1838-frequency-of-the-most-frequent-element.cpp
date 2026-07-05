class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
      std::sort(nums.begin(),nums.end());
      int n=nums.size();
        int j=0;
        long long curneed=0;
        int maxf=1;
        for(int i=0;i<n-1;i++){
           long long diff=nums[i+1]-nums[i];
           curneed+=(i-j+1)*diff;

           while(curneed>k){
            curneed-=(nums[i+1]-nums[j]);
            j++;

           }
           maxf=max(maxf,i-j+2);

        }
        return maxf;
        

    }
};