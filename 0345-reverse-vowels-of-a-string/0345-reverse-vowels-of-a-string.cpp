class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        set<char>v={ 'a', 'e', 'i', 'o','u','A','E','I','O','U'};
        while(i<j){
            bool a=false;
            bool b=false;
            if(v.find(s[i])!=v.end())
            a=true;
            else
            i++;

            if(v.find(s[j])!=v.end())
            b=true;
            else
            j--;

            if(a && b){
            std::swap(s[i],s[j]);
            i++;
            j--;
            }
        }
        return s;
    }
};