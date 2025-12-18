class Solution {
public:
    string removeOccurrences(string s, string part) {
        if(s.size()<part.size()) return s;

        int i=0;
        string output;
        bool rec=false;
        while(i<s.size()){
            if(s[i]==part[0] && (i+part.size())<=s.size() && s.substr(i,part.size())==part){
                i+=part.size();
                rec=true;
                while(i<s.size()){
                    output+=s[i];
                    i++;
                }
                break;
            }
            if(i<s.size())
            output+=s[i];
            i++;
        }
        if(rec)
        return removeOccurrences(output,part);
        else
        return output;
    }
};