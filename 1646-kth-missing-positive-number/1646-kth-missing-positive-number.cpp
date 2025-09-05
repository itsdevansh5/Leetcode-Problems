class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int count=0;
        int mis=0;
        if(arr[0]>1){
            count=arr[0]-1;
            mis=arr[0]-1;
            if(count>=k)
            return mis -(count-k);
        }
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]>1){
                for(int j=arr[i-1]+1;j<arr[i];j++){
                    mis=j;
                    count++;
                    if(count==k)
                    return mis;
                }
            }
        }
        if(count<k)
        mis=arr[n-1]+(k-count);
        return mis;
        
    }
};