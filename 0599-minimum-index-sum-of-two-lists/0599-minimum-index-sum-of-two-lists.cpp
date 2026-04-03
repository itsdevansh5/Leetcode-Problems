class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> res;
        unordered_map<string,int> mp;

        for(int i = 0; i < list1.size(); i++){
            mp[list1[i]] = i;
        }

        int mins = INT_MAX;

        for(int i = 0; i < list2.size(); i++){
            if(i > mins) break;

            if(mp.find(list2[i]) != mp.end()) {
                int sum = i + mp[list2[i]];

                if(sum < mins){
                    mins = sum;
                    res.clear();
                    res.push_back(list2[i]);
                }
                else if(sum == mins){
                    res.push_back(list2[i]);
                }
            }
        }

        return res;
    }
};