class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long long i=0;i<=sqrt(c);i++){
            int target=c-i*i;
            int l=i;
            int h=sqrt(c);
            while(l<=h){
                long long mid=l+(h-l)/2;
                if(mid*mid==target) return true;
                else if(mid*mid>target) h=mid-1;
                else l=mid+1;
            }
        }
        return false;
    }
};