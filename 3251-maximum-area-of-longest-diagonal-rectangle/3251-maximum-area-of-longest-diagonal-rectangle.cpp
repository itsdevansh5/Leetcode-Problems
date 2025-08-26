class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n=dimensions.size();
        double maxd=INT_MIN;
        int maxa;
        for(int i=0;i<n;i++){
            if(sqrt(dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1])>maxd){
            maxd=sqrt(dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1]);
            maxa=dimensions[i][0]*dimensions[i][1];
            }
            if(sqrt(dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1])==maxd){
                maxa=max(maxa,dimensions[i][0]*dimensions[i][1]);
            }
        
            
        }
        return maxa;
        
    }
};