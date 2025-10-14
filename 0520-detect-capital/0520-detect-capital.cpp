class Solution {
public:
    bool detectCapitalUse(string word) {
        if(isupper(word[0])){
            int count=0;
            for(int i=1;i<word.size();i++){
                if(isupper(word[i]))
                count++;
            }
            if(count==0 || count==word.size()-1)
            return true;
            else
            return false;

        }
        else{
            for(int i=1;i<word.size();i++){
                if(isupper(word[i]))
                return false;
            }
            return true;
        }
        
    }
};