class Solution {
public:
    int lb(vector<int>&heaters,int t){
      int l=0;
      int h=heaters.size()-1;
      while(l<=h){
        int mid=l+(h-l)/2;
        if(heaters[mid]>=t) h=mid-1;
        else l=mid+1;
      }
      return l;
    }
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        std::sort(houses.begin(),houses.end());
        std::sort(heaters.begin(),heaters.end());
        int maxd=0;
        for(int i=0;i<houses.size();i++){
          int idx=lb(heaters,houses[i]);
          if(idx==0) maxd=max(maxd,heaters[0]-houses[i]);
          else if(idx<heaters.size()){
            int mind=min(heaters[idx]-houses[i],houses[i]-heaters[idx-1]);
            maxd=max(maxd,mind);
          }
          else maxd=max(maxd,houses[i]-heaters.back());
          
        }
        return maxd;
    }
};