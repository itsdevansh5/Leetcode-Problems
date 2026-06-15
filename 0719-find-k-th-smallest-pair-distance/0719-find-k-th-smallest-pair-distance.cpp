class Solution {
public:
    long long count(vector<int>&nums,int d){
     long long pair=0;
     int j=1;
    for (int i = 0; i < (int)nums.size(); i++) {
        if (j < i + 1) j = i + 1; // j must stay ahead of i
        while (j < (int)nums.size() && nums[j] - nums[i] <= d) j++;
        pair += (j - i - 1);
    }
    return pair;
}
    
    int smallestDistancePair(vector<int>& nums, int k) {
       std::sort(nums.begin(),nums.end());
      int n=nums.size();
        int l=0;
        int h=nums.back()-nums[0];
        while(l<=h){
          int mid=l+(h-l)/2;
          if(count(nums,mid)>=k) h=mid-1;
          else l=mid+1;
        }
        return l;
    }
};