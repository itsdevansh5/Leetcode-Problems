class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_set<int>s;
        int i;
        for( i=nums.size()-1;i>=0;i--){
            if(s.find(nums[i])==s.end())
            s.insert(nums[i]);
            else
            break;
        }
        int count=i-0+1;;
        count=(int)ceil(count/3.0);
        return count;
    }
};