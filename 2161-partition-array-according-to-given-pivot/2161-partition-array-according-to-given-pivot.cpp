class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
         vector<int>arr(n);
         int i=0;
         for(int j=0;j<nums.size();j++){
          if(nums[j]<pivot){
            arr[i]=nums[j];
            i++;
          }
         }
         for(int j=0;j<n;j++){
          if(nums[j]==pivot){
            arr[i]=nums[j];
            i++;
          }
         }
         for(int j=0;j<n;j++){
          if(nums[j]>pivot){
            arr[i]=nums[j];
            i++;
          }
         }
         return arr;
    }
};