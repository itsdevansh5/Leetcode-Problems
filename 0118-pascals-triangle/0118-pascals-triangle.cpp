class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        if(numRows>=1){
            ans.push_back({1});

        }
        for(int i=1;i<numRows;i++){
            vector<int>h;
            h.resize(i+1);
            h[0]=1;
            h[i]=1;
            int a=0;
            for(int k=1;k<i;k++){
                h[k]=ans[i-1][a]+ans[i-1][a+1];
                a++;
            }
            ans.push_back(h);

            


        }
        return ans;
        
    }
};