class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>hashmap;
        for(int i=0;i<nums.size();i++){
            hashmap[nums[i]]++;
        }
        int a;
        for(auto it:hashmap){
            if(it.second==1)
             a= it.first;
        }
        return a;
        
        
    }
};