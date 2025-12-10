class Solution {
public:
    bool anagram(string a,string b){
        vector<int>v(26,0);
        for(auto i:a){
            v[i-'a']++;
        }
        for(auto i:b){
            v[i-'a']--;
        }
        for(auto i:v){
            if(i!=0)
            return false;
        }
        return true;

    }
   vector<vector<string>> groupAnagrams(vector<string>& strs) {
    int n = strs.size();
    vector<bool> used(n, false);
    vector<vector<string>> ans;

    for (int i = 0; i < n; i++) {
        if (used[i]) continue;

        vector<string> group;
        group.push_back(strs[i]);
        used[i] = true;

        for (int j = i + 1; j < n; j++) {
            if (!used[j] && strs[i].size() == strs[j].size() && anagram(strs[i], strs[j])) {
                used[j] = true;
                group.push_back(strs[j]);
            }
        }
        ans.push_back(group);
    }

    return ans;
}
};
