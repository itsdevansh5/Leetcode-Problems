class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
          if(matrix.size()==0) return 0;
      int m=matrix.size();
      int n=matrix[0].size();
        vector<vector<int>>r(m,vector<int>(n,n));
        vector<vector<int>>c(m,vector<int>(n,m));
        for(int i=0;i<m;i++){
          stack<int>st;
          for(int j=n-1;j>=0;j--){
            int v=matrix[i][j]-'0';
            while(!st.empty() && matrix[i][st.top()]-'0'>=v){
              st.pop();
            }
            if(!st.empty() && v!=matrix[i][st.top()]-'0') r[i][j]=st.top();
            st.push(j);
          }

        }
        for(int i=0;i<n;i++){
          stack<int>st;
          for(int j=m-1;j>=0;j--){
            int v=matrix[j][i]-'0';
            while(!st.empty() && matrix[st.top()][i]-'0'>=v){
              st.pop();

            }
            if(!st.empty() && v!=matrix[st.top()][i]-'0') c[j][i]=st.top();
            st.push(j);
          }
        }
        int maxa=0;
        for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
            if(matrix[i][j]=='0') continue;
            int l=r[i][j]-j;
            int b=c[i][j]-i;
            for(int k=j;k<r[i][j] && k<n;k++){
              b=min(b,c[i][k]-i);
              if(k-j+1==b)
              maxa=max(maxa,(k-j+1)*b);
            }
            
          }
        }
        return maxa;
    }
    
};