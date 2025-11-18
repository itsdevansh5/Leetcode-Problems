class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int count=0;
        string word;
        stringstream ss(s);
        vector<string>v;
        while(getline(ss,word,' ')){
            count++;
            v.push_back(word);
        }
        if(count!=pattern.size())
        return false;
        unordered_map<char,string>m;
        set<string>mapped;
        for(int i=0;i<count;i++){
            if(m.find(pattern[i])==m.end() && mapped.find(v[i])==mapped.end()){
            m[pattern[i]]=v[i];
            mapped.insert(v[i]);
            }
            else if(m[pattern[i]]!=v[i])
            return false;
        }
        return true;

    }
};