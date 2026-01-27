class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0;
        int cursum=0;
        int count=0;
        for(int j=0;j<arr.size();j++){
            cursum+=arr[j];

            while((j-i+1)>k){
                int r=arr[i];
                i++;
                cursum-=r;
            }
            if((cursum/(j-i+1))>=threshold && (j-i+1)==k) count++;
        }
        return count;
    }
};