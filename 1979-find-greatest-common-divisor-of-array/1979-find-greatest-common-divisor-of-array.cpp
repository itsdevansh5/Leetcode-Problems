class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minv=1001;
        int maxv=0;
        for(int i:nums){
            minv=min(minv,i);
            maxv=max(maxv,i);
        }
        while(minv>0){
            int v=minv;
           minv=maxv%minv;
           maxv=v;
            
        }
        return maxv;
    }
};