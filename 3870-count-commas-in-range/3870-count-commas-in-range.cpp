class Solution {
public:
    int countCommas(int n) {
        int i=1000;
        int res=0;
        while(n>=i){
           res+=(n-i+1);
           i=i*1000;
        }
        return res;
    }
    
};