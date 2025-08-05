class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>freq;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
            j++;
            else{
            freq.push_back(j);
            j=0;
            }
            

        }
        freq.push_back(j);
        std::sort(freq.begin(),freq.end());
        return *(freq.end()-1);
        
    }
};