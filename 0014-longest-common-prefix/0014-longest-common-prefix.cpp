class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int minv=INT_MAX;
        string count="";
        int mins;
        for(int i=0;i<n;i++){
            if(strs[i].size()<minv){
            minv=strs[i].size();
            mins=i;
            }

             

        }
        for(int i=0;i<minv;i++){
            for(int j=0;j<n-1;j++){
                if(strs[j][i]!=strs[j+1][i])
                return count;
            }
            count+=strs[mins][i];
        }
        return strs[mins];

        
    }
};