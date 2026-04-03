class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string>res;
        int m=list1.size();
        int n=list2.size();
        unordered_map<string,int>mp;
        unordered_map<string,int>np;
        for(int i=0;i<m;i++){
            mp[list1[i]]=i;
        }
        int mins=INT_MAX;
        for(int i=0;i<n;i++){
            if(mp.find(list2[i])!=mp.end())
                 np[list2[i]]=i+mp[list2[i]];
    
            }
            for(auto i:np){
                mins=min(mins,i.second);
            }
            for(auto i:np){
                if(i.second==mins) res.push_back(i.first);
            }
        return res;
        
    }
};