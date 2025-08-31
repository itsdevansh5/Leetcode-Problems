class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;

        unordered_map<char, char> mapST;
        unordered_map<char, char> mapTS;

        for (int i = 0; i < s.size(); i++) {
            char cs = s[i];
            char ct = t[i];

            // Check if current mapping conflicts with previous mapping
            if (mapST.count(cs) && mapST[cs] != ct)
                return false;

            if (mapTS.count(ct) && mapTS[ct] != cs)
                return false;

            // Create new mappings
            mapST[cs] = ct;
            mapTS[ct] = cs;
        }

        return true;
    }
};