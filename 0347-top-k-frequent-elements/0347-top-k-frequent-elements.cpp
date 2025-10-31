class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        set<int>s(nums.begin(),nums.end());
        vector<int>arr;
        for(auto i:s){
            arr.push_back(i);
        }
        std::sort(arr.begin(),arr.end(),[&](int a,int b){return m[a]>m[b];});
        vector<int>ans;
        int i=0;
        while(k--){
            ans.push_back(arr[i]);
            i++;

        }
        return ans;

        
    }
};