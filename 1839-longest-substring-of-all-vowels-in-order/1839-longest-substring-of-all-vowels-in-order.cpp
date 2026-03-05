class Solution {
public:
    int longestBeautifulSubstring(string word) {
     int i=0;
     int maxl=0;
     int count=1;
     for(int j=0;j<word.size();j++){
        if(j>0 && word[j]>word[j-1]) count++;
        else if(j>0 && word[j]<word[j-1]){
            i=j;
            count=1;
        }

        if(count==5) maxl=max(maxl,(j-i+1));

     }   
     return maxl;
    }
};