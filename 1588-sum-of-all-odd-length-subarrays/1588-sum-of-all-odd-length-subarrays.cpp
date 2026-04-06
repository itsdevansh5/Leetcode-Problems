class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int res=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int num=((i+1)*(n-i)+1)/2;
            res+=(num*arr[i]);
        }
        return res;
    }
};