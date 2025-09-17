class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> indexMap;  
        vector<int> ans;

        for(int i=0; i<nums2.size(); i++) {
            indexMap[nums2[i]] = i;
        }

    
        for(int i=0; i<nums1.size(); i++) {
            int startIdx = indexMap[nums1[i]];
            bool found = false;

        
            for(int j=startIdx+1; j<nums2.size(); j++) {
                if(nums2[j] > nums1[i]) {
                    ans.push_back(nums2[j]);
                    found = true;
                    break;
                }
            }

            if(!found) {
                ans.push_back(-1);
            }
        }

        return ans;
    }
};
