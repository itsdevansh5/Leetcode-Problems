class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0;
        int maxl=0;
        unordered_map<int,int>mp;
        for(int j=0;j<fruits.size();j++){
             mp[fruits[j]]++;

             while(mp.size()>2){
                int r=fruits[i];
                i++;
                mp[r]--;
                if(mp[r]==0) mp.erase(r);
             }
             maxl=max(maxl,(j-i+1));
        }
        return maxl;
    }
};