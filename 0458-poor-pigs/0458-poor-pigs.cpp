class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int base=minutesToTest/minutesToDie+1;
        int p=0;
        int k=1;
        while(k<buckets){
           k*=base;
           p++;
        }
        return p;
    }
};