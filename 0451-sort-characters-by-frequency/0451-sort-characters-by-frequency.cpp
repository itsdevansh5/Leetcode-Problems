class Solution {
public:
    string frequencySort(string s) {
        vector<int>freq(256,0);
        for(char c:s){
            freq[(unsigned char)c]++;
        }
       vector<char>ch;
       for(int i=0;i<freq.size();i++){
        if(freq[i]>0) ch.push_back(char(i));
       }
       std::sort(ch.begin(),ch.end(),[&](char a,char b){return freq[(unsigned char)a]>freq[(unsigned char)b];});
       string ans;
       for(char c:ch){
        ans+=string(freq[(unsigned char)c],c);
       }
       return ans;

    }
};