class Solution {
public:
    bool isPossible(vector<int>& arr,int n,int days){
        int i=0;
        while(i<arr.size()){
            int sum=0;
            while(i<arr.size() && sum+arr[i]<=n) {
                sum+=arr[i];
            i++;
            }
            days--;
            
            
        }
        return days>=0;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        int maxc=0;
        for(int i:weights){
            sum+=i;
            maxc=max(maxc,i);
        }
        int l=maxc;
        int h=sum;
        while(l<h){
            int mid=l+(h-l)/2;
            if(isPossible(weights,mid,days)) h=mid;
            else l=mid+1;
        }
        return l;
    }
};