class Solution {
public:
    int countPartitions(vector<int>& nums) {
        unordered_map<int,int>m;
        int sum=0;
        for(int i=0;i<nums.size()-1;i++){
            sum+=nums[i];
            m[i]=sum;

        }
        int totsum=0;
        for(auto i:nums){
            totsum+=i;
        }
        int count=0;
        for(auto i:m){
            if(abs(i.second-(totsum-i.second))%2==0)
            count++;
        }
        return count;
    }
};