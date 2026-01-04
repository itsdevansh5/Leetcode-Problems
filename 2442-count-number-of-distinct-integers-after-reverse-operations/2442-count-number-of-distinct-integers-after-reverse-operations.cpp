class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int rev=0;
            int org=nums[i];
            while(org>0){
                rev=rev*10+(org%10);
                org/=10;
            }
            s.insert(rev);

        }
        return s.size();
    }
};