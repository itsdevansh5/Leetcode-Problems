class Solution {
public:
    vector<int> findAnagrams(string s, string p) {


        vector<int>freq(26,0);
        vector<int>res;
        for(auto i:p) freq[i-'a']++;
     vector<int>np(26,0);
        int i=0;
        int n=p.size();
        for(int j=0;j<s.size();j++){
          np[s[j]-'a']++;

          while((j-i+1)>n){
            np[s[i]-'a']--;
            i++;
          }
          if((j-i+1)==n && freq==np) res.push_back(i);
        }
        return res;
    }
};