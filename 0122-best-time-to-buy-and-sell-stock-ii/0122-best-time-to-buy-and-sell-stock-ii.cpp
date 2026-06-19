class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curbuy=prices[0];
        int tot=0;
        int n=prices.size();
        for(int i=1;i<n;i++){
          if(prices[i]>curbuy) {
            tot+=prices[i]-curbuy;
          }
          curbuy=prices[i];
        }
        return tot;
    }
};