class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        while(1){
            sum=0;
            while(num>0){
            sum+=(num%10);
            num=num/10;
            }
            if(sum%10==sum)
            return sum;
            num=sum;
        }
        return 0;
        
    }
};