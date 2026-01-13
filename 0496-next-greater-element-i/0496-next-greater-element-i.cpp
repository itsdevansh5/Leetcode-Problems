class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        stack<int>st;
        for(int i=nums2.size()-1;i>=0;i--){
         int v=nums2[i];

         while(!st.empty() && st.top()<=v){
            st.pop();
         }
         if(!st.empty()) mp[v]=st.top();
         else mp[v]=-1;
 
         st.push(v);
        }
        vector<int>res;
        for(auto j:nums1){
            res.push_back(mp[j]);
        }
        return res;
    }
};