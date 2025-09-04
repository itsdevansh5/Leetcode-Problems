class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>f(k+arr[arr.size()-1]);
        unordered_map<int,int>freq;
        int count=0;
        for(auto i:arr){
            freq[i]++;
        }
        int ans=0;
        for(int i=0;i<f.size();i++){
            if(freq.find(i+1)==freq.end())
            count++;
            if(count==k){
            ans=i+1;
            break;
            }
            

        }

        return ans;
    }
};