class Solution {
public:
    vector<int>CountingSort(vector<int>&costs){
      int n=costs.size();
      vector<int>res(n);
      int maxv=*max_element(costs.begin(),costs.end());
      vector<int>freq(maxv+1);
      for(int i:costs) freq[i]++;
      for(int i=1;i<=maxv;i++){
        freq[i]=freq[i]+freq[i-1];
      }
      for(int i=n-1;i>=0;i--){
        res[freq[costs[i]]-1]=costs[i];
        freq[costs[i]]--;
      }
      return res;
    }
    int maxIceCream(vector<int>& costs, int coins) {
        vector<int>cost=CountingSort(costs);
        int tot=0;
        int num=0;
        for(int i=0;i<cost.size();i++){
          if(tot+cost[i]>coins) break;
          else {
            tot+=cost[i];
            num++;
          }
        }
        return num;
    }
};