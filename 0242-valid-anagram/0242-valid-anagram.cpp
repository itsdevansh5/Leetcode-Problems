class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>freq;
        freq.resize(26);
        for(auto i:s){
            freq[(int)(i-'a')]++;
        }
        for(auto i:t){
            freq[(int)(i-'a')]--;
        }
        for(auto i:freq){
            if(i!=0)
            return false;
        }
        return true;

        
    }
};