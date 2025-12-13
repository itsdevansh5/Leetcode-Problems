class Solution {
public:
    bool valid(const string& code, const string& businessLine, bool isActive,
               unordered_map<string,int>& mp) {
        if(code.size()==0) return false;
        if(!isActive) return false;

        if(mp.find(businessLine) == mp.end())
            return false;

        for(char c : code){
            if(!isalnum(c) && c != '_')
                return false;
        }
        return true;
    }

    vector<string> validateCoupons(vector<string>& code,
                                   vector<string>& businessLine,
                                   vector<bool>& isActive) {

        unordered_map<string,int> mp = {
            {"electronics",0},
            {"grocery",1},
            {"pharmacy",2},
            {"restaurant",3}
        };

        vector<vector<string>> v(4);

        for(int i = 0; i < code.size(); i++){
            if(valid(code[i], businessLine[i], isActive[i], mp)){
                v[mp[businessLine[i]]].push_back(code[i]);
            }
        }

        vector<string> res;
        for(auto& group : v){
            sort(group.begin(), group.end());
            for(auto& s : group)
                res.push_back(s);
        }
        return res;
    }
};
