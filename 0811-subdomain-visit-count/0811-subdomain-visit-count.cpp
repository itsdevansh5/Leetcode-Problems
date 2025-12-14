class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string,int>mp;
         for(int i=0;i<cpdomains.size();i++){
              int num=0;
              int k=0;
              while(k<cpdomains[i].size() && isdigit(cpdomains[i][k])){
                num=num*10+(cpdomains[i][k]-'0');
                k++;
              }
            int j=k+1;
            while(j<cpdomains[i].size()){
                 string subd=cpdomains[i].substr(j);
                 mp[subd]+=num;
                 while(j<cpdomains[i].size() && cpdomains[i][j]!='.'){
                    j++;
                 }
                 j++;
            }
              
         }
         vector<string>res;
         for(auto &i:mp){
            int num=i.second;
            string fin=to_string(num)+" "+i.first;
            res.push_back(fin);
         }
         return res;
    }
};