class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long>ans;
        stack<long long>st;
        for(int i=0;i<nums.size();i++){
            long long r=nums[i];
              while(!st.empty() && st.top()==r){
                long long  a=st.top();
                st.pop();
                r=r+a;
              }
          st.push(r);
        }
        while(!st.empty()){
            long long a=st.top();
            ans.push_back(a);
            st.pop();
        }
        std::reverse(ans.begin(),ans.end());
        return ans;
    }
};