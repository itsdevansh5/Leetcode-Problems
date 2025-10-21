class Solution {
public:
     string expand(string s,int i,int j){
            while(i>=0 && j<s.size()){
               if(s[i]!=s[j])
               break;
               else{
               i--;
               j++;
               }
            }
            return s.substr(i+1,j-i-1);

        }
        
    string longestPalindrome(string s) {
        string maxs;
        for(int i=0;i<s.size();i++){
            string a=expand(s,i,i+1);
            string b=expand(s,i,i);
            if(a.size()>maxs.size())
            maxs=a;
            if(b.size()>maxs.size())
            maxs=b;


        }
        return maxs;
       
    }
};