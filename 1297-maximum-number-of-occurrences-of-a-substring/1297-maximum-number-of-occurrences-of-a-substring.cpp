class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        int i=0;
        int j=0;
        unordered_map<string,int>strings;
        vector<int>freq(26,0);
        int letters=0;
        for(int j=0;j<s.size();j++){
            if(freq[s[j]-'a']==0) letters++;
            freq[s[j]-'a']++;

            while(letters>maxLetters || (j-i+1)>minSize){
                char r=s[i];
                i++;
                freq[r-'a']--;
                if(freq[r-'a']==0) letters--;
            }
            if ((j - i + 1) == minSize)
    strings[s.substr(i, minSize)]++;
        }
        
        
        int maxv=0;
        for(auto i:strings){
if(i.second>maxv){
    maxv=i.second;
}
        }
        return maxv;
    }
};