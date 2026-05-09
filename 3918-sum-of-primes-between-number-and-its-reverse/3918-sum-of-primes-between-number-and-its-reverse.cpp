class Solution {
public:
    bool prime(int n){
        if(n<2) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int sumOfPrimesInRange(int n) {
        int r=0;
        int a=n;
        while(n>0){
            r=r*10+(n%10);
            n/=10;
        }
        int res=0;
        for(int i=min(a,r);i<=max(a,r);i++){
            if(prime(i)) res+=i;
        }
        return res;
        
    }
};