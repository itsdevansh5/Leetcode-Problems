class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(auto i:arr){
            mp[i]++;
        }
        vector<int>val;
        for(auto i:mp){
            val.push_back(i.first);
        }
        std::sort(val.begin(),val.end(),[&](int a,int b){return mp[a]>mp[b];});
        while(k>0){
            int r=val.back();
            if(k>=mp[r])
            k-=mp[r];
            else
            break;
            val.pop_back();

        }
        return val.size();

    }
};