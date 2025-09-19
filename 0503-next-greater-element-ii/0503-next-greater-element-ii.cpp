class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
        }
        stack<int>st;
        for(int i=nums.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i]){
                st.pop();
            }
            if(!st.empty()){
                if(i>n-1)
                ans[i-n]=st.top();
                else
            ans[i]=st.top();
            }

            st.push(nums[i]);
            

        }
        return ans;
        
        
        
    }
};