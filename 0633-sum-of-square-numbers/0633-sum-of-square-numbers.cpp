class Solution {
public:
    bool judgeSquareSum(int c) {
        long long l=0;
        long long h=sqrt(c);
        while(l<=h){
            long long sum=l*l+h*h;
            if(sum<c) l++;
            else if(sum>c) h--;
            else return true;



        }
        return false;
    }
};