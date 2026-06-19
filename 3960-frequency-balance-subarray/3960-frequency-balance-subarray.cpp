class Solution {
public:
    int getLength(vector<int>& nums) {
        int n=nums.size();
       
        int maxl=0;
        for(int i=0;i<n;i++){
           unordered_map<int,int>mp;
        unordered_map<int,int>freq;
           for(int j=i;j>=0;j--){
           int oldf = mp[nums[j]];

if(oldf > 0){
    freq[oldf]--;
    if(freq[oldf] == 0)
        freq.erase(oldf);
}

mp[nums[j]]++;

freq[oldf + 1]++;
                if(freq.size()==1 && (freq.begin())->second==1) maxl=max(maxl,i-j+1);
                else if(freq.size()==2){
                  int minf=i-j+1;
                  int maxf=0;
                    for(auto &p:freq){
                      minf=min(minf,p.first);
                      maxf=max(maxf,p.first);
                    }
                    if(maxf==minf*2) maxl=max(maxl,i-j+1);
                }
           }
        }
        return maxl;
    }
};