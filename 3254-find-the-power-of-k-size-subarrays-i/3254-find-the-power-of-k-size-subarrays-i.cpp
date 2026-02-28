class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
       int i=0;
       vector<int>res;
       int valid=0;
       for(int j=0;j<nums.size();j++){
          if(j>0 && nums[j]-nums[j-1]!=1) valid++;

          while((j-i+1)>k){
            if(nums[i]-nums[i+1]!=-1) valid--;
            i++;
          }
          if((j-i+1)==k && valid==0) res.push_back(nums[j]);
          else if((j-i+1)==k) res.push_back(-1);
       }      
       return res;
    }
};