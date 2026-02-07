class Solution {
public:
    int trap(vector<int>& height) {
        unordered_map<int,pair<int,int>>mp;
        int maxv=0;
        for(int i=0;i<height.size();i++){
          mp[i].first=maxv;
          maxv=max(maxv,height[i]);
        }
        maxv=0;
        for(int j=height.size()-1;j>=0;j--){
           mp[j].second=maxv;
           maxv=max(maxv,height[j]);
        }
        int tot=0;
        for(int i=0;i<height.size();i++){
            int m,n;
                m=mp[i].first;
                n=mp[i].second;
                int width=min(m,n);
                
                int wat=width-(height[i]);
                tot+=max(0,wat);
            
            
        }
       return tot;
    }
};