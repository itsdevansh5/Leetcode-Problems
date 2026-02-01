class Solution {
public:
    int oddc(vector<int> & nums,int k){
        if(k<0) return 0;
          int odd=0;
        int i=0;
        int count=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]%2!=0) odd++;

            while(odd>k){
                int r=nums[i];
                i++;
                if(r%2!=0) odd--;
                
            }
            count+=(j-i+1);
            
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
      return oddc(nums,k)-oddc(nums,k-1);
    }
};