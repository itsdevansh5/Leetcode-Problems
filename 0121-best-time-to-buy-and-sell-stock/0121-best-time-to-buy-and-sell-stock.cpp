class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int b=prices[0];
        int cp=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<b)
            b=prices[i];
            else
            cp=prices[i]-b;
            if(cp>maxp)
            maxp=cp;


        }
        return maxp;
        
    }
};