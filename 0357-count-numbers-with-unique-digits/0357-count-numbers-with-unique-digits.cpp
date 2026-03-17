class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int res=0;
        for(int i=1;i<=n;i++){
            int a=1;
            int b=9;
            for(int j=1;j<=i;j++){
                if(j==1 || j==2) a*=b;
                else a*=(--b);
            }
            res+=a;

        }
        return res+1;
    }
};