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
            if(ab.count(m)>0 && ba.count(n)>0 && ab[m]==n && ba[n]==m) continue;
            else{
                if(ab.count(m)==0 && ba.count(n)==0){
                    ab[m]=n;
                    ba[n]=m;
                }
                else
                return false;
            } 
            

            
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