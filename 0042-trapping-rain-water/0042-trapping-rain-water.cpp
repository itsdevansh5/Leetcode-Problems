class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>left(height.size());
        vector<int>right(height.size());
        int maxv=0;
        for(int i=0;i<height.size();i++){
         
          maxv=max(maxv,height[i]);
           left[i]=maxv;
        }
        maxv=0;
        for(int j=height.size()-1;j>=0;j--){
          
           maxv=max(maxv,height[j]);
            right[j]=maxv;
        }
        int tot=0;
        for(int i=0;i<height.size();i++){
            int m,n;
                m=left[i];
                n=right[i];
                int width=min(m,n);
                
                int wat=width-(height[i]);
                tot+=max(0,wat);
            
            
        }
       return tot;
    }
};