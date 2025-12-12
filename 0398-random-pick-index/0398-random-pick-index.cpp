class Solution {
public:

    uint32_t fastRand() {
        static uint32_t x = 0xabcdef01;
        x ^= x << 13;
        x ^= x >> 17;
        x ^= x << 5;
        return x;
    }

    unordered_map<int, vector<int>> mp;

    Solution(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }
    }
    
    int pick(int target) {
        const vector<int>& indx = mp[target]; 
        int pos = fastRand() % indx.size();    
        return indx[pos];
    }
};
