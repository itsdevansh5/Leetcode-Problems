class Solution {
public:
    string reverseWords(string s) {
        unordered_set<char>v={'a', 'e', 'i', 'o','u','A','E','O','U','I'};
        int j=0;
        int n=0;
        while(j<s.size() && s[j]!=' '){
            if(v.find(s[j])!=v.end())
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
                if(v.find(s[j])!=v.end())
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