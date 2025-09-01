class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int cd=0;
        int maxd=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
            cd++;
            if(s[i]==')')
            cd--;
            if(cd>maxd)
            maxd=cd;
        }
        return maxd;
        
    }
};