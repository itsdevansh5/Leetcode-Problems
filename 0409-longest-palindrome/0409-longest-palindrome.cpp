class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>freq(128,0);
        for(char i:s){
            freq[i]++;
        }
        int maxl=0;
        bool odd=false;
        for(int i:freq){
           if(i>0) maxl+=(i/2)*2;
           if(i%2!=0) odd=true;

        }
        return (odd+maxl);
    }
};