class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>m;
        for(auto i:s){
            if(m.find(i)==m.end())
            m[i]++;
            else
            return i;
        }
        return 'a';
        
    }
};