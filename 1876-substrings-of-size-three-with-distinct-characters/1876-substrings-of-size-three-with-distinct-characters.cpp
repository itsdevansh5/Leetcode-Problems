class Solution {
public:
    int countGoodSubstrings(string s) {
        vector<int>freq(26,0);
        int i=0;
        int count=0;
        for(int j=0;j<s.size();j++){
            freq[s[j]-'a']++;

            while((j-i+1)>3){
                freq[s[i]-'a']--;
                i++;
            }

            while(freq[s[j]-'a']>1){
                freq[s[i]-'a']--;
                i++;
            }

            if((j-i+1)==3) count++;

        }
        return count;
    }
};