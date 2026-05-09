class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<vector<int>>res;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                res.push_back({arr[i],arr[j]});
            }
        }
        std::sort(res.begin(),res.end(),[](vector<int>& a,vector<int>& b){return a[0]*b[1] < b[0]*a[1]; });
        return res[k-1];
        
    }
};