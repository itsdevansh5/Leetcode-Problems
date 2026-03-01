class Solution {
public:
    int minPartitions(string n) {
        int maxd=0;
        for(char i:n){
            int r=(i-'0');
            maxd=max(maxd,r);
        }
        return maxd;
    }
};