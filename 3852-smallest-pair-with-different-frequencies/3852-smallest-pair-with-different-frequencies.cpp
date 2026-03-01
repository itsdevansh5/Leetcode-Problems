class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        for (int x : nums) {
            mp[x]++;
        }
        
        if (mp.size() < 2) return {-1, -1};
        
        // Extract unique values
        vector<int> values;
        for (auto &p : mp) {
            values.push_back(p.first);
        }
        
        sort(values.begin(), values.end());
        
        // Find lexicographically smallest valid pair
        for (int i = 0; i < values.size(); i++) {
            for (int j = i + 1; j < values.size(); j++) {
                if (mp[values[i]] != mp[values[j]]) {
                    return {values[i], values[j]};
                }
            }
        }
        
        return {-1, -1};
    }
};