class Solution {
public:
    bool halvesAreAlike(string s) {
        set<char>vowels={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int n=s.size();
        string a=s.substr(0,n/2);
        string b=s.substr(n/2);
        int count=0;
        for(auto i:a){
            if(vowels.find(i)!=vowels.end())
            count++;
        }
        for(auto i:b){
            if(vowels.find(i)!=vowels.end())
            count--;
        }
        if(count==0)
        return true;
        else
        return false;

        
    }
};