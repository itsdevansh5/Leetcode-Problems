class Solution {
public:
    int gcd(int a,int b){
        while(b>0){
            int temp=a%b;
            a=b;
            b=temp;
        }
        return a;
    }
    bool isGoodArray(vector<int>& nums) {
        int n=nums[0];
        for(int i=1;i<nums.size();i++){
            int v=gcd(n,nums[i]);
            n=v;
        }
        return (n==1);
    }
};