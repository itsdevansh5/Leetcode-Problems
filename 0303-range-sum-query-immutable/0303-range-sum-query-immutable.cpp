class NumArray {
public:
   vector<int>nums;
   unordered_map<int,int>mp;
    NumArray(vector<int>& nums) {
        this->nums=nums;
        int cursum=0;
        for(int i=0;i<nums.size();i++){
              cursum+=nums[i];
              this->mp[i]=cursum;
        }
    }

    
    int sumRange(int left, int right) {
        return this->mp[right]-this->mp[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */