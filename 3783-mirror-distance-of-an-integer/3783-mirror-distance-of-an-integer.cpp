class Solution {
public:
    int mirrorDistance(int n) {
        int r=0;
        int org=n;
        while(n>0){
            r=r*10+(n%10);
            n/=10;
        }
        return abs(org-r);
    }
};