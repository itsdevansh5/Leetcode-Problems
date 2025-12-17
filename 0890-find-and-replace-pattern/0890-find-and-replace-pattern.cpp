class Solution {
public:
    bool isomorphic(string a,string b){
        if(a.size()!=b.size())
        return false;
        unordered_map<char,char>ab;
        unordered_map<char,char>ba;

        for(int i=0;i<a.size();i++){
            char m=a[i];
            char n=b[i];
            if(ab.count(m) && ab[m]!=n)
            return false;
            if(!ab.count(m) && ba.count(n) && ba[n]!=m)
            return false;
            ab[m]=n;
            ba[n]=m;
        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            if(isomorphic(pattern,words[i]))
            ans.push_back(words[i]);
        }
        return ans;
        
    }
};