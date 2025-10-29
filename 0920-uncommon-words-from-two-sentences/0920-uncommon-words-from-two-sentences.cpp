class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>words;
        string word;
        stringstream ss(s1);
        while(getline(ss,word,' ')){
            words.push_back(word);
        }
        ss.clear();
        ss.str("");
        ss.str(s2);
        word="";
        while(getline(ss,word,' ')){
            words.push_back(word);
        }
        unordered_map<string,int>m;
        for(auto i:words){
            m[i]++;
        }
        vector<string>ans;
        for(auto i:m){
            if(i.second==1)
            ans.push_back(i.first);

        }
        return ans;
        
        
    }
};