class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int l=0;
        for(int i=0;i<n;i++) l=max(l,citations[i]);
        vector<int>h(l+1,0);
        for(int i=0;i<n;i++){
          int v=citations[i];
          for(int i=0;i<=v;i++){
            h[i]++;
          }
        }
        int maxv=0;
        for(int i=0;i<l+1;i++){
          if(h[i]>=i) maxv=max(maxv,i);
        }
        return maxv;

        
        
    }
};