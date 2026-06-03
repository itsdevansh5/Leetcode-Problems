class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int m=landStartTime.size();
        int n=waterStartTime.size();
        int res=INT_MAX;
        for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
            int la=landStartTime[i];
            int lb=landDuration[i];
            int wa=waterStartTime[j];
            int wb=waterDuration[j];
            int v1=max(la+lb+wb,wa+wb);
            int v2=max(wa+wb+lb,la+lb);
            res=min({res,v1,v2});
          
      
            
          }
    
        }
        return res;
    }
};