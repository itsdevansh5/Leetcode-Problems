class Solution {
public:
    int minLights(vector<int>& lights) {
      int n=lights.size();
        vector<int>area(n,0);
        for(int i=0;i<n;i++){
          int v=lights[i];
          if(v>0){
            int start=max(0,i-v);
            int end=min(n-1,i+v);
            area[start]+=-1;
            if(end+1<n) area[end+1]+=1;
          }
        }
        int cursum=0;
        for(int i=0;i<area.size();i++){
          cursum+=area[i];
          area[i]=cursum;
          
        }
        int cur=0;
        int tot=0;
        for(int i=0;i<area.size();i++){
          if(area[i]==0) cur++;
          else {
            tot+=(cur+2)/3;
            cur=0;
            
          }

          


        }
        tot+=((cur+2)/3);
        return tot;
    }
};