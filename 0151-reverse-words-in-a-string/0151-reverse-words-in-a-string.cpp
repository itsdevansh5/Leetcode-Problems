class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        s="";
        stack<string>words;
        string word;
        while(ss>>word){
            words.push(word);

            

        }
        while(!words.empty()){
            s+=words.top();
            
            words.pop();
            s+=" ";
        }
        s.erase(s.end()-1);
        return s;
        
    }
};