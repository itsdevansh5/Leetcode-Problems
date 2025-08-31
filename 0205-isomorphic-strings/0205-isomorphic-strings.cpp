class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        char mapST[256] = {0};
        char mapTS[256] = {0};

        for (int i = 0; i < s.size(); i++) {
            char cs = s[i], ct = t[i];
            if (mapST[cs] == 0 && mapTS[ct] == 0) {
                mapST[cs] = ct;
                mapTS[ct] = cs;
            } else if (mapST[cs] != ct || mapTS[ct] != cs) {
                return false;
            }
        }
        return true;
    }
};
