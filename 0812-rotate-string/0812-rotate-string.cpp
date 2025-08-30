class Solution {
public:
    bool rotateString(string s, string goal) {
        string start;
        string end;
        for(int i=0;i<s.size();i++){
            if(s[i]==goal[0]){
                 start=s.substr(i,s.size()-i);
                 end=s.substr(0,s.size()-start.size());
                  if(goal==(start+end))
                 return true;
            }
        }
       
        return false;
        
    }
};