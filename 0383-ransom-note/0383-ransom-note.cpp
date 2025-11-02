class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>m;
        for(auto i:ransomNote){
            m[i]++;
        }
        unordered_map<char,int>n;
        for(auto i:magazine){
            n[i]++;
        }
        for(auto i:m){
            if(n.find(i.first)==n.end())
            return false;
            
        }
        for(auto i:m){
            if(i.second>n[i.first])
            return false;
        }
        return true;
        
    }
};