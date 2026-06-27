class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        vector<int>pmax(n);
        vector<int>pmin(n);
        int curmax=0;
        for(int i=0;i<n;i++) {
          curmax=max(curmax,arr[i]);
          pmax[i]=curmax;
        }
        int curmin=INT_MAX;
        for(int i=n-1;i>=0;i--){
           curmin=min(curmin,arr[i]);
           pmin[i]=curmin;
        }
        int tot=1;
        for(int i=1;i<n;i++){
           if(pmin[i]>=pmax[i-1]) tot++;
        }
        return tot;

    }
};