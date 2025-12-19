class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string>dict(dictionary.begin(),dictionary.end());
        string output;
        int i=0;
        while(i<sentence.size()){
           string word;
           while(i<sentence.size() && sentence[i]!=' '){
            
            if(dict.find(word)!=dict.end()){
                i++;
                continue;
            }
            else{
            word+=sentence[i];
            i++;
            }
           }
           i++;
           if(output.size()==0)
           output+=word;
           else
           output=output+" "+word;
        }
        if(output.back()==' ')
        output.pop_back();
        return output;
        
    }
};