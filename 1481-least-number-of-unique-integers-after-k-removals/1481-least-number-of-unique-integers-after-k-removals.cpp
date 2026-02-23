class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;

        for(int num : arr)
            mp[num]++;

        vector<int> freq;

        for(auto &p : mp)
            freq.push_back(p.second);

        sort(freq.begin(), freq.end());  // ascending

        int unique = freq.size();

        for(int f : freq) {
            if(k >= f) {
                k -= f;
                unique--;
            } else {
                break;
            }
        }

        return unique;
    }
};