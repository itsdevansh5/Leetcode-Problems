class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        vector<std::pair<int,int>>subs;
        int i=0;
        int j=0;
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
            if((j-i+1)==minSize)
           subs.push_back({i,j});
        }
        unordered_map<string,int>strings;
        for(int i=0;i<subs.size();i++){
            int a=subs[i].first;
            int b=subs[i].second;
            string sub=s.substr(a,(b-a+1));
            strings[sub]++;
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