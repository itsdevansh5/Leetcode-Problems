class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string, int> mp;

        for (string &entry : cpdomains) {
            int spacePos = entry.find(' ');
            int count = stoi(entry.substr(0, spacePos));
            string domain = entry.substr(spacePos + 1);

            mp[domain] += count;

            for (int i = 0; i < domain.size(); i++) {
                if (domain[i] == '.') {
                    mp[domain.substr(i + 1)] += count;
                }
            }
        }

        vector<string> res;
        for (auto &p : mp) {
            res.push_back(to_string(p.second) + " " + p.first);
        }
        return res;
    }
};
