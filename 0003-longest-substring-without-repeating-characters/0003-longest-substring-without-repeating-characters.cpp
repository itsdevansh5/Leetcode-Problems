class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int maxl=0;
        unordered_map<char,int>mp;
        for(int j=0;j<s.size();j++){
           mp[s[j]]++;
    
           while(mp[s[j]]>1){
            mp[s[i]]--;
            if(mp[s[i]]==0) mp.erase(s[i]);
            i++;
           }
           if(maxl<(j-i+1)) maxl=j-i+1;
        }
        return maxl;
    }
};