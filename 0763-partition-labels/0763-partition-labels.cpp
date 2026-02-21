class Solution {
public:
    vector<int> partitionLabels(string s) {
      vector<int>a(26,0);
      vector<int>b(26,0);
      vector<int>res;
      for(auto i:s){
        a[i-'a']++;
      }
      int act=0;
      int valid=0;
      int last=0;
      for(int i=0;i<s.size();i++){
        if(b[s[i]-'a']==0) act++;
          b[s[i]-'a']++;
          if(b[s[i]-'a']==a[s[i]-'a']) valid++;

          if(valid==act){
            valid=0;
            act=0;
            if(res.size()==0)
            res.push_back(i-last+1);
            else 
            res.push_back(i-last);
            last=i;
          }

      }
      return res;
    }
};