class Solution {
public:
    int sum(vector<int>& nums,int r){
        int res=0;
        for(int i:nums) res+=ceil((double)i/r);
        return res;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxv=nums[0];
        for(int i:nums) {
            maxv=max(maxv,i);
        }
        int l=1;
        int h=maxv;
        while(l<h){
            int mid=l+(h-l)/2;
            int v=sum(nums,mid);
            if(v<=threshold) h=mid;
            else l=mid+1;
        }
        return l;

    }
};