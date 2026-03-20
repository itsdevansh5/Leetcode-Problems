class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<time.size();i++){
            int r=time[i]%60;
            if(time[i]%60!=0)
            count+=mp[60-r];
            else count+=mp[0];
            mp[r]++;
        }
        return count;
    }
};