class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty,
                            vector<int>& profit,
                            vector<int>& worker) {

        vector<pair<int,int>> jobs;

        for(int i=0;i<difficulty.size();i++) {
            jobs.push_back({difficulty[i], profit[i]});
        }

        sort(jobs.begin(), jobs.end());

        // prefix maximum profit
        for(int i=1;i<jobs.size();i++) {
            jobs[i].second = max(jobs[i].second,
                                 jobs[i-1].second);
        }

        int total = 0;

        for(int w : worker) {

            int l = 0;
            int h = jobs.size()-1;
            int ans = -1;

            // find last difficulty <= worker ability
            while(l <= h) {
                int mid = l + (h-l)/2;

                if(jobs[mid].first <= w) {
                    ans = mid;
                    l = mid + 1;
                }
                else {
                    h = mid - 1;
                }
            }

            if(ans != -1)
                total += jobs[ans].second;
        }

        return total;
    }
};