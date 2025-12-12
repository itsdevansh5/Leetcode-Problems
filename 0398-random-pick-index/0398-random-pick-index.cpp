class Solution {
public:
    
uint32_t fastRand() {
    static uint32_t x = 0xabcdef01;
    x ^= x << 13;
    x ^= x >> 17;
    x ^= x << 5;
    return x;
}
    vector<int>arr;
    unordered_map<int,vector<int>>mp;
    Solution(vector<int>& nums) {
        this->arr =nums;
        for(int i=0;i<this->arr.size();i++){
           if(mp.find(arr[i])==mp.end())
           mp[arr[i]]={i};
           else
           mp[arr[i]].push_back(i);
        }
    }
    
    int pick(int target) {
        vector<int>indx=mp[target];
        int ans=fastRand() % indx.size();
        return indx[ans];
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */