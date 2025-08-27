class Solution {

public:
int r=1e9+7;
 long long mypow(long long b,long long e){
    if(e==0)return 1;
    
    if(e%2==0){
        if(e==1)
        return b;
        e=e/2;
        long long half=mypow(b,e)%r;
        return (half*half)%r;

    }
    else{
        if(e==1)
        return b;
        e=(e-1)/2;
        long long half=mypow(b,e)%r;
        return ((b%r)*half*half)%r;
    }
 }
    int countGoodNumbers(long long n) {
        long long result;
        if(n==1){
        return 5;
        }
        
        else {
            long long ev,od;
            if(n%2==0){
                ev=n/2;
                od=n/2;
                

            }
            else{
                od=n/2;
                ev=od+1;
            }
            result=(mypow(5,ev)*mypow(4,od))%r;
        }
        return (int)(result%r);

        
    }
};