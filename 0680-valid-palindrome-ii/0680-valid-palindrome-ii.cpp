class Solution {
public:
    bool ispalin(string s,int a,int b){
        while(a<b){
            if(s[a]!=s[b]) return false;
            a++;
            b--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                if(ispalin(s,i+1,j)) return true;
                else if(ispalin(s,i,j-1)) return true;
                else return false;
            }
            i++;
            j--;
        }
        return true;
    }
};