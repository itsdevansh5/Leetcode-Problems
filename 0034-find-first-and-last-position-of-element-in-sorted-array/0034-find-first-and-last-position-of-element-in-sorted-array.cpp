class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target){
                int n=std::count(nums.begin(),nums.end(),target);
                auto it=std::find(nums.begin(),nums.end(),target);
                int a=std::distance(nums.begin(),it);
                int b=a+n-1;
                vector<int>vec={a,b};
                return vec;
            }
            else if(nums[mid]>target)
            h=mid-1;
            else
            l=mid+1;
        }
        vector<int>vec={-1,-1};
        return vec;
        
    }
};