class Solution {
public:
    long long countCommas(long long n) {
        long long res=0;
        long long a=1000;
        while(n>=a){
            res+=(n-a+1);
            a*=1000;
        }
        return res;
    }
};