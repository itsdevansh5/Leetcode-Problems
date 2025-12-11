class Solution {
public:
    string repeat(string s, int n) {
    string result;
    result.reserve(s.size() * n); // optimization
    while (n--) result += s;
    return result;
}

    bool repeatedSubstringPattern(string s) {
        if(s.size()==1) return false;
        for(int i=1;i<=s.size()/2;i++){
            if(s.size()%i==0){
                int m=s.size()/i;
                string sub=s.substr(0,i);
                string n=repeat(sub,m);
                if(n==s)
                return true;
            }
        }
        return false;
    }
};