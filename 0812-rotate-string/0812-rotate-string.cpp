class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
        return false;
        s+=s;
        int n=goal.length();
        for(int i=0;i<s.size();i++){
            if(s.substr(i,n)==goal)
            return true;
        }
        return false;
        
    }
};