class Solution {
public:
    int maxDistance(string moves) {
        int x=0;
        int y=0;
        int n=moves.size();
        int u=0;
        int d=0;
        int r=0;
        int l=0;
        int dash=0;
        for(int i=0;i<n;i++){
            char t=moves[i];
            if(t=='U'){
              u++;
              y+=1;
            }
            else if(t=='D'){
              d++;
              y-=1;
            }
            else if(t=='L'){
              l++;
              x-=1;
            }
            else if(t=='R'){
              r++;
              x+=1;
            }
            else dash++;
        }
       int dist=abs(x)+abs(y)+dash;
       return dist;

    }
};