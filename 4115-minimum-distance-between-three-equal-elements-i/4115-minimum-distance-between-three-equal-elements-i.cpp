class Solution {
public:
    int dist(vector<int>n){
        int minv=INT_MAX;
        if(n.size()==3){
            int a=abs(n[0]-n[1]);
            int b=abs(n[1]-n[2]);
            int c=abs(n[0]-n[2]);
            return (a+b+c);

        }

        else{
            
            for(int i=0;i<n.size();i++){
                for(int j=i+1;j<n.size();j++){
                    
                    for(int k=j+1;k<n.size();k++){
                       int val=abs(n[i]-n[j])+abs(n[i]-n[k])+abs(n[k]-n[j]);
                       if(minv>val)
                    minv=val;
                    }
                    
                    
                }
            }
        }
        return minv;

    }
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        vector<int>v;
        for(auto i:m){
            if(i.second>=3)
            v.push_back(i.first);

        }
        if(v.size()==0)
        return -1;
        int minv=INT_MAX;
        for(int i=0;i<v.size();i++){
            vector<int>n;
            for(int j=0;j<nums.size();j++){
               if(v[i]==nums[j])
               n.push_back(j);
            }
          int val=dist(n);
          if(minv>val)
          minv=val;
        }
        return minv;
    }
};