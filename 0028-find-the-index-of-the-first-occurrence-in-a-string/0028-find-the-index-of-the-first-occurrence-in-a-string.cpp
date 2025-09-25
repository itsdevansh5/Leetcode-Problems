class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.length();
        for(int i=0;i<haystack.size();i++){
            if( haystack[i]==needle[0] && haystack.substr(i,n)==needle){
            return i;
            break;
            }
        }
        return -1;
        
    }
};