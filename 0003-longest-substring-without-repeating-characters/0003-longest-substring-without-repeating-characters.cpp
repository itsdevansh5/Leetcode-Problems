class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int maxl=0;
        int curl=0;
        unordered_map<char,int>mp;
        for(int j=0;j<s.size();j++){
           mp[s[j]]++;
           curl+=1;
           while(mp[s[j]]>1){
            curl--;
            mp[s[i]]--;
            i++;
            if(mp[s[i]]==0) mp.erase(s[i]);
           }
           if(maxl<curl) maxl=curl;
        }
        return maxl;
    }
};