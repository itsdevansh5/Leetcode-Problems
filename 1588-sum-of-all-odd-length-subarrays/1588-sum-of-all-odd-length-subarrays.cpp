class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int res=0;
        int sum=0;
        int i=0;
        while(i<arr.size()){
            sum+=arr[i];
            int j=0;
            int cursum=sum;
            while(j<=i){
                if((i-j+1)%2!=0) res+=cursum;
                cursum-=arr[j];
                j++;

            }
            i++;

            
        }
        return res;
    }
};