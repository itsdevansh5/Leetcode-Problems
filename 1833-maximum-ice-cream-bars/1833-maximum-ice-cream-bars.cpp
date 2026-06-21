class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        std::sort(costs.begin(),costs.end());
        int tot=0;
        int num=0;
        for(int i=0;i<costs.size();i++){
          if(tot+costs[i]>coins) break;
          else {
            tot+=costs[i];
            num++;
          }
        }
        return num;
    }
};