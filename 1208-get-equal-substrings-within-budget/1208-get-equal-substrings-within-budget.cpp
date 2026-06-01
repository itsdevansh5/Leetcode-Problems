class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.size();
        int curCost=0;
        int i=0;
        int maxl=0;
        for(int j=0;j<n;j++){
          curCost+=abs(s[j]-t[j]);
          
          while(curCost>maxCost){
            curCost-=abs(s[i]-t[i]);
            i++;
          }
          maxl=max(maxl,j-i+1);
        }
        return maxl;
    }
};