class Solution {
public:
    int longestBeautifulSubstring(string word) {
        deque<char>dq;
        unordered_map<char,int>mp;
        unordered_map<char,int>np;
        mp['a']=1;
        mp['e']=2;
        mp['i']=3;
        mp['o']=4;
        mp['u']=5;
        int maxl=0;
        for(int i=0;i<word.size();i++){
          while(!dq.empty() && mp[dq.back()]>mp[word[i]]){
            char r=dq.front();
            dq.pop_front();
            np[r]--;
            if(np[r]==0) np.erase(r);
          }
          dq.push_back(word[i]);
          np[word[i]]++;
          int s=dq.size();
          if(np.size()==5)
          maxl=max(s,maxl);
        }
        return maxl;
    }
};