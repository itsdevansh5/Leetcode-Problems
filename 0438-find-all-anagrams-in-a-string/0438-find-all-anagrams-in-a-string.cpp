class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
    

        vector<int>freq(26,0);
        vector<int>org(26,0);
        vector<int>res;
        for(auto i:p) freq[i-'a']++;
        int i=0;
        int n=p.size();
        int need=p.size();
        for(int j=0;j<s.size();j++){
            org[s[j]-'a']++;
          if(freq[s[j]-'a']>=org[s[j]-'a']) need--;

          while((j-i+1)>n){
            if(freq[s[i]-'a']>=org[s[i]-'a']) need++;
            org[s[i]-'a']--;
            i++;
          }
          if((j-i+1)==n && need==0) res.push_back(i);
        }
        return res;
    }
};