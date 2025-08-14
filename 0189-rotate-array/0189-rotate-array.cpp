class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if((k%n==0)||(k==0))
        return;
        k=k%n;
        
        vector<int>left;
        vector<int>right;
        left.insert(left.begin(),nums.begin(),nums.begin()+n-k);
        right.insert(right.begin(),nums.begin()+n-k,nums.end());
        right.insert(right.end(),left.begin(),left.end());
        nums=right;
        return;



        


        
    }
};