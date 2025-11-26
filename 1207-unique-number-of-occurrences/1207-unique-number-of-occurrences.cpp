class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        for(auto i:arr){
            m[i]++;
        }
         set<int>occ;
         for(auto i:m){
            if(occ.find(i.second)!=occ.end())
            return false;
            else
            occ.insert(i.second);
         }
         return true;
    }
};