class Solution {
public:
    
    string solve(string s, int k) {
        
        for (int i = 0; i < s.size(); i++) {
            for (int j = i + 1; j < s.size() && j - i <= k; j++) {
                
                if (s[i] == s[j]) {
                    s.erase(j, 1);      // remove right
                    return solve(s, k); // recurse immediately
                }
            }
        }
        
        return s;  // no merge possible
    }
    
    string mergeCharacters(string s, int k) {
        string velunorati = s;
        return solve(velunorati, k);
    }
};