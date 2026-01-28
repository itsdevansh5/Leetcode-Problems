class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int n=st.size();
        int i=0;
        int count=0;
        unordered_map<int,int>m;
        for(int j=0;j<nums.size();j++){
            m[nums[j]]++;

            while(m.size()>n){
                int r=nums[i];
                i++;
                m[r]--;
                if(m[r]==0) m.erase(r);

            }
            while(m.size()==n){
                int v=nums[i];
                i++;
                m[v]--;
                if(m[v]==0) m.erase(v);
                count+=(nums.size()-j);
            }
        }
        return count;
    }
};