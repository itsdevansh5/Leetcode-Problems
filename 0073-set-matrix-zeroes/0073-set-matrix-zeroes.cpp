class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>zero;
        zero.resize(m);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    zero[i].push_back(j);

                }
            }
        }
        for(int k=0;k<m;k++){
            if(zero[k].size()!=0){
                std::fill(matrix[k].begin(),matrix[k].end(),0);
                for(auto i:zero[k]){
                    for(int g=0;g<m;g++){
                        matrix[g][i]=0;
                    }
                }

            }
        }
       return ;
        
    }
};