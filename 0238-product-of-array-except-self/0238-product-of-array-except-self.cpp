class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        int curp=1;
        for(int i=0;i<n;i++){
            res[i]=curp;
            curp*=nums[i];

        }
        curp=1;
        for(int i=n-1;i>=0;i--){
            res[i]*=curp;
            curp*=nums[i];
        }
        return res;

    }
};