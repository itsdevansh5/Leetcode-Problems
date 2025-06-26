#include<math.h>
class Solution {
public:
    bool isPalindrome(int x) {
        int count=1;
        long int a=10;
        int y=x;
        while(x/a!=0){
            count++;
            a*=10;

        }
        long int b=10;
        long int rev=0;
        for(int i=count-1;i>=0;i--){
            rev=rev+(x%10)*pow(b,i);
            x=x/b;

            

        }
        if (y>=0 and rev==y){
            return true;
        }
        else{
            return false;
        }

    }
};