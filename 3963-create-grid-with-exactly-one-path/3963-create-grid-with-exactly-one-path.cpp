class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>res(m);
        for(int i=0;i<m;i++){
          res[i]=string(n,'#');
        }
        for(int i=0;i<m;i++){
          res[i][0]='.';
        }
        for(int j=1;j<n;j++) res[m-1][j]='.';

        return res;
    }
};