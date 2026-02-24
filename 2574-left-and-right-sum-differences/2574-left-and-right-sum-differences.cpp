class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>res;
        int leftsum=0;
        int rightsum=0;
        for(int i:nums){
            rightsum+=i;
        }
        for(int i:nums){
            rightsum-=i;
            res.push_back(abs(rightsum-leftsum));
            leftsum+=i;
        }
        return res;
    }
};