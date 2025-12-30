class Solution {
public:
    string reverseWords(string s) {
      bool isVowel[256]={false};
      isVowel['a'] = true;
isVowel['e'] = true;
isVowel['i'] = true;
isVowel['o'] = true;
isVowel['u'] = true;

isVowel['A'] = true;
isVowel['E'] = true;
isVowel['I'] = true;
isVowel['O'] = true;
isVowel['U'] = true;
        int j=0;
        while(j<s.size() && s[j]==' ') j++;
        int n=0;
        while(j<s.size() && s[j]!=' '){
            if(isVowel[s[j]])
            n++;
            j++;
            
        }
        while(j<s.size()){
             while(j<s.size() && s[j]==' '){
                j++;
             }
             int i=j;
             int count=0;
             while(j<s.size() && s[j]!=' '){
                if(isVowel[s[j]])
                count++;
                j++;
             }
             int k=j-1;
             if(count==n){
              while(i<k){
                std::swap(s[i],s[k]);
                i++;
                k--;
              }
             }
        }
        return s;
    }
};