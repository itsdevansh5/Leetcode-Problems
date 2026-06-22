class Solution {
public:
    int maxDistance(string moves) {
        int x=0;
        int y=0;
        int n=moves.size();
        int dash=0;
        for(int i=0;i<n;i++){
            char t=moves[i];
            if(t=='U'){
              y+=1;
            }
            else if(t=='D'){
              y-=1;
            }
            else if(t=='L'){
              x-=1;
            }
            else if(t=='R'){
              x+=1;
            }
            else dash++;
        }
       int dist=abs(x)+abs(y)+dash;
       return dist;

    }
};