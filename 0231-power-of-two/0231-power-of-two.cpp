class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        int divi=n;
        int div=2;
        while(divi/div!=0){
            if(divi%div!=0)
            return false;
            divi=divi/div;
        
        }
        return true;
        
    }
};