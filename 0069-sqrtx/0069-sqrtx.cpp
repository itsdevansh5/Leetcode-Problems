class Solution {
public:
    int mySqrt(int x) {
        if(x==1) return 1;
        int l=0;
        int h=x/2;
        while(l<=h){
            long long mid=l+(h-l)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid<x) l=mid+1;
            else h=mid-1;
        }
        return h;
    }
};