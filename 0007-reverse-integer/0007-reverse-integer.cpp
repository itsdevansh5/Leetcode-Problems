
class Solution {
public:
    int reverse(int x) {
        long int rev=0;
        long rem;
        while(x!=0){
            rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        }
        if(rev>=-2147483648 && rev<=2147483647){
            return rev;
        }
        else
        return 0;
        
    }
};