class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        for(auto i:nums1){
            m1[i]++;
        }
        for(auto i:nums2){
            m2[i]++;
        }
        vector<int>ans;
        set<int>st(nums1.begin(),nums1.end());
        for(auto i:st){
            if(m2.find(i)!=m2.end()){
                int a=m1[i];
                int b=m2[i];
                int k;
                if(a>=b)
                k=b;
                else
                k=a;
                while(k--){
                        ans.push_back(i);
                    }
            }
        }
        return ans;
    }
};