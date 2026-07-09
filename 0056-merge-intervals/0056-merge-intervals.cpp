class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>res;
        std::sort(intervals.begin(),intervals.end(),[](vector<int>&a,vector<int>&b){return a[0]<b[0];});
        res.push_back(intervals[0]);
        int n=intervals.size();
        for(int i=1;i<n;i++){
          int end1=(res.back())[1];
          int start2=intervals[i][0];
          int end2=intervals[i][1];
          if(end1>=start2) (res.back())[1]=max(end2,end1);
          else res.push_back(intervals[i]);
        }
        return res;

    }
};