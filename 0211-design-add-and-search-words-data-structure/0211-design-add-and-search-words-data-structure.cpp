class WordDictionary {
public:
    unordered_set<string>s;
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        if(s.find(word)==s.end())
        s.insert(word);
        return ;
    }
    
    bool search(string word) {
        if(s.find(word)!=s.end()) return true;
        for(auto &i:s){
            if(i.size()!=word.size()) continue;
            int j=0;
            while(j<word.size() && (i[j]==word[j] || word[j]=='.')){
                j++;
            }       
            if(j==word.size()) return true; 
            }
            return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */