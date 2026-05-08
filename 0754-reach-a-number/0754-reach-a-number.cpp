class Solution {
public:
    int reachNumber(int target) {
        target=abs(target);
        long long i=1;
        long long dist=0;
        while(dist<target || (dist-target)%2!=0){
            dist+=i;
            i++;
        }
        return i-1;
    }
};