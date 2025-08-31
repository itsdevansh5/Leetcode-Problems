class Solution {
public:
    string removeOuterParentheses(string s) {
        int track=0;
        string result;
        int start=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
            track++;
            else
            track--;
            if(track==0 && i!=0){
                result+=(s.substr(start+1,i-(start+1)));
                start=i+1;

            }
        }
        return result;

        
    }
};