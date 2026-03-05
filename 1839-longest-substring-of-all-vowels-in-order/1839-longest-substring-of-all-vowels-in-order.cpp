class Solution {
public:
    int longestBeautifulSubstring(string word) {
        deque<char>dq;
        unordered_map<char,int>mp;
        vector<int>np(5,0);
        mp['a']=0;
        mp['e']=1;
        mp['i']=2;
        mp['o']=3;
        mp['u']=4;
        int maxl=0;
        int count=0;
        for(int i=0;i<word.size();i++){
          while(!dq.empty() && mp[dq.back()]>mp[word[i]]){
            char r=dq.front();
            dq.pop_front();
            np[mp[r]]--;
            if(np[mp[r]]==0) count--;
          }
          dq.push_back(word[i]);
          if(np[mp[word[i]]]==0) count++;
          np[mp[word[i]]]++;
          int s=dq.size();
          if(count==5)
          maxl=max(s,maxl);
        }
        return maxl;
    }
};