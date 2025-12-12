class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>arr(100000,0);
        for(auto i: nums){
            arr[i-1]++;
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(arr[i]==2)
            ans.push_back(i+1);

        }
        return ans;
    }
};