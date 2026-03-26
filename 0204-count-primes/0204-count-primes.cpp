class Solution {
public:
    int countPrimes(int n) {
        vector<bool>nums(n+1,true);
        nums[0]=false;
        nums[1]=false;
        for(int i=2;(long long)i*i<n;i++){
            if(nums[i]){
                for(long long j=(long long)i*i;j<n;j+=i){
                    nums[j]=false;
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]) count++;
        }
        return count;
    }
};