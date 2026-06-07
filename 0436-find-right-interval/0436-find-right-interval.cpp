class Solution {
public:
    int lowerBound(vector<int>&arr,int target){
      int l=0;
      int h=arr.size()-1;
      while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]>=target) h=mid-1;
        else l=mid+1;
      }
      return l;
    }
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
      int n=intervals.size();
        vector<int>res(n,-1);
        vector<int>starts(n);
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){ 
          starts[i]=intervals[i][0];
          mp[intervals[i][0]]=i;
        }
        std::sort(starts.begin(),starts.end());
        
      
        for(int i=0;i<n;i++){
            int idx=lowerBound(starts,intervals[i][1]);
            if(idx<n) res[i]=mp[starts[idx]]; 
        }
        return res;

    }
};