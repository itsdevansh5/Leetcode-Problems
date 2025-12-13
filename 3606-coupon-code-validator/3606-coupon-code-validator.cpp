#include<cctype>
class Solution {
public:
     bool valid(string code, string businessLine, bool isActive){
          for(auto i:code){
            if(!isalnum(i) && i!='_')
            return false;
          }
          if(businessLine!="electronics" && businessLine!="grocery" && businessLine!="restaurant" &&businessLine!="pharmacy")
          return false;

          if(!isActive)
          return false;

          return true;
     }
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<vector<string>>v(4);
        unordered_map<string,int>mp={{"electronics",0},{"grocery",1},{"pharmacy",2},{"restaurant",3}};
        for(int i=0;i<code.size();i++){
            if(valid(code[i],businessLine[i],isActive[i])){
                v[mp[businessLine[i]]].push_back(code[i]);

            }
        }
       if(v[0].size()!=0) std::sort(v[0].begin(),v[0].end());
       if(v[1].size()!=0) std::sort(v[1].begin(),v[1].end());
     if(v[2].size()!=0) std::sort(v[2].begin(),v[2].end());
     if(v[3].size()!=0) std::sort(v[3].begin(),v[3].end());
     vector<string>res;
     for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j].size()!=0)
            res.push_back(v[i][j]);
        }
     }
     return res;
    }
};