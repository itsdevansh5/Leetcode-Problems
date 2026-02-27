class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        if(s.size()==1) return 1;
        int count=0;
        int i=0;
        int maxl=0;
        for(int j=0;j<s.size()-1;j++){
              if(s[j]==s[j+1]) count++;

              while(count>1){
                if(s[i]==s[i+1]) count--;
                i++;
              }
              maxl=max(maxl,(j-i+2));
        }
        return maxl;
    }
};