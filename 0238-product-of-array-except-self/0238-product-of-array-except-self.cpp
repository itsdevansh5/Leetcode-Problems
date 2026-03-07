class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n);
        vector<int>suff(n);
        int curp=1;
        for(int i=0;i<n;i++){
            pre[i]=curp;
            curp*=nums[i];

        }
        curp=1;
        for(int i=n-1;i>=0;i--){
            suff[i]=curp;
            curp*=nums[i];
        }
        vector<int>res(n);
        for(int i=0;i<n;i++){
            res[i]=pre[i]*suff[i];
        }
        return res;

    }
};