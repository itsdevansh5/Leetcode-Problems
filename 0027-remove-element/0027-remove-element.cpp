class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        deque<int>d;
        for(auto i:nums){
            d.push_back(i);
        }
        int i=0;
        while(!d.empty()){
            if(d.front()!=val){
                nums[i]=d.front();
                d.pop_front();
                i++;

            }
            else
            d.pop_front();
        }
        return i;
        
        
    }
};