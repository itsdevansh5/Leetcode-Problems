class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int a=0;
        int b=0;
        for(char t:moves){
            if(t=='L') a++;
            else if(t=='R') b++;
        }
        char p=(a>b)?'L':'R';
        int d=0;
        for(int i=0;i<moves.size();i++){
            char v=(moves[i]!='_')?moves[i]:p;
            if(v=='L') d++;
            else if(v=='R') d--;
        }
        return abs(d);
    }
};