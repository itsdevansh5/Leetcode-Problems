class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        std::sort(points.begin(),points.end(),[](vector<int>&a,vector<int>&b){return a[0]<b[0];});
        int n=points.size();
        int tot=1;
        int curarr=points[0][0];
        int curdep=points[0][1];
        for(int i=1;i<n;i++){
           curarr=max(curarr,points[i][0]);
           curdep=min(curdep,points[i][1]);
           if(curarr>curdep) {
            curarr=points[i][0];
            curdep=points[i][1];
            tot++;
           }
        }
        return tot;
    }
};