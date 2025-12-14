class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string,int>mp;
         for(int i=0;i<cpdomains.size();i++){
              string fulld=cpdomains[i];
              int num=0;
              int k=0;
              while(k<fulld.size() && isdigit(fulld[k])){
                num=num*10+(fulld[k]-'0');
                k++;
              }
            int j=k+1;
            while(j<fulld.size()){
                 string subd=fulld.substr(j);
                 mp[subd]+=num;
                 while(j<fulld.size() && fulld[j]!='.'){
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