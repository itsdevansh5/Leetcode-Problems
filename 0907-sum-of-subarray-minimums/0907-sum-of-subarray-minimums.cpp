class Solution {
public:
    vector<int>num(vector<int>&arr){
      vector<int>res(arr.size(),0);
       stack<int>st;
       for(int i=0;i<arr.size();i++){
        int v=arr[i];
        while(!st.empty() && arr[st.top()]>=v){
          st.pop();
        }
        if(!st.empty()) res[i]=(i-st.top());
        else res[i]=i+1;
        st.push(i);
       }
       stack<int>qt;
       for(int i=arr.size()-1;i>=0;i--){
        int r=arr[i];
        while(!qt.empty() && arr[qt.top()]>r){
          qt.pop();
        }
        if(!qt.empty()) res[i]*=qt.top()-i;
        else res[i]*=(arr.size()-i);
        qt.push(i);
       }
       return res;
    }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int>n=num(arr);
        long long mod=1e9+7;
        long long sum=0;
        for(int i=0;i<n.size();i++){
         sum=(sum+((n[i]%mod)*(arr[i]%mod)))%mod;
        }
        return sum;
    }
};