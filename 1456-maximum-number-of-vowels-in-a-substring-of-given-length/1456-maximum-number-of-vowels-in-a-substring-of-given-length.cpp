class Solution {
public:
    int maxVowels(string s, int k) {
        vector<int>freq(26,0);
        freq[0]=1;
        freq['e'-'a']=1;
        freq['i'-'a']=1;
        freq['o'-'a']=1;
        freq['u'-'a']=1;

        int i=0;
        int maxv=0;
        int count=0;
        for(int j=0;j<s.size();j++){
            if(freq[s[j]-'a']>0) count++;

            while((j-i+1)>k){
                if(freq[s[i]-'a']>0) count--;
                i++;
            }
            if((j-i+1)==k) maxv=max(maxv,count);
        }
        return maxv;
    }
};