class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(int num:arr){
            mp[num]++;
        }
        vector<int>freq(1e5);
        for(auto &i:mp){
            freq[i.second]++;
        }
        int unique=mp.size();
        int i=0;
        while(i<freq.size() && k>0){
             while(freq[i]>0 && k>=i){
                k-=i;
                unique--;
                freq[i]--;
             }
             i++;
             
        }
        return unique;
    }
};