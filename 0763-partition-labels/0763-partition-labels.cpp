class Solution {
public:
    vector<int> partitionLabels(string s) {
      vector<int>li(26,0);
      vector<int>res;
      for(int i=0;i<s.size();i++){
        li[s[i]-'a']=i;
      }
      int curlast=-1;
      int start=0;
      for(int i=0;i<s.size();i++){
        curlast=max(curlast,li[s[i]-'a']);
        if(curlast==i){
           
            res.push_back(i-start+1);
             start=i+1;
        }

      }
      return res;
    }
};