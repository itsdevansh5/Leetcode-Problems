class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string>dict(dictionary.begin(),dictionary.end());
        string output;
        int i=0;
        while(i<sentence.size()){
           string word;
           while(i<sentence.size() && sentence[i]!=' '){
              word+=sentence[i];
              if(dict.find(word)!=dict.end()){
              break;
              }
              i++;
           }
           output+=word;
           while(i<sentence.size() && sentence[i]!=' '){
            i++;
           }
           i++;
           if(i<sentence.size())
           output+=' ';

         
        }
        return output;
        
    }
};