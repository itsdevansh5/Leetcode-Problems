class Solution {
public:
    int ndigits(int n){
        int res=0;
        while(n>0){
            res++;
            n/=10;
        }
        return res;
    }
    int countCommas(int n) {
        int nd=ndigits(n);
        int r=nd/3;
    string s="999";
    string p="999";
    int res=0;
    while(r--){
        int t=n-stoi(s);
        if(t>0)
        res+=t;
        s+=p;
    }
    return res;
    }
    
};