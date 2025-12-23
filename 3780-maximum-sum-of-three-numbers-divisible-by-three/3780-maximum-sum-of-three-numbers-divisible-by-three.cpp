class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<int>arr0;
        vector<int>arr1;
        vector<int>arr2;
        for(auto i:nums){
            if(i%3==0) arr0.push_back(i);
            else if(i%3==1) arr1.push_back(i);
            else arr2.push_back(i);
        }
        int maxsum=0;
        std::sort(arr0.begin(),arr0.end(),[](int a,int b){return a>b;});
        std::sort(arr1.begin(),arr1.end(),[](int a,int b){return a>b;});
       std::sort(arr2.begin(),arr2.end(),[](int a,int b){return a>b;});
       if(arr0.size()>=3){
        if(maxsum<(arr0[0]+arr0[1]+arr0[2]))
        maxsum=arr0[0]+arr0[1]+arr0[2];
       }
        if(arr1.size()>=3){
        if(maxsum<(arr1[0]+arr1[1]+arr1[2]))
        maxsum=arr1[0]+arr1[1]+arr1[2];
       }
        if(arr2.size()>=3){
        if(maxsum<(arr2[0]+arr2[1]+arr2[2]))
        maxsum=arr2[0]+arr2[1]+arr2[2];
       }
       if(arr0.size()!=0 && arr1.size()!=0 && arr2.size()!=0){
        if(maxsum<(arr0[0]+arr1[0]+arr2[0]))
        maxsum=arr0[0]+arr1[0]+arr2[0];
       }
       return maxsum;
       
    }
};