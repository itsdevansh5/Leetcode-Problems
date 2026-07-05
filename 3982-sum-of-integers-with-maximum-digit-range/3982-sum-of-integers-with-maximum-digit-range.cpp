class Solution {
public:
    int digitRange(int n){
      int maxd=0;
      int mind=9;
      while(n>0){
        maxd=max(maxd,n%10);
        mind=min(mind,n%10);
        n/=10;
      }
      return maxd-mind;
    }
    int maxDigitRange(vector<int>& nums) {
       int maxd=0;
        for(int i:nums){
          maxd=max(maxd,digitRange(i));
        }
        int sum=0;
        for(int i:nums){
          if(digitRange(i)==maxd) sum+=i;
        }
        return sum;
    }
};