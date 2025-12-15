class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        if(prices.empty()) return 0;
        long long count = 1;
        long long streak = 1;

        for(int i = 1; i < prices.size(); i++){
            if(prices[i] == prices[i-1] - 1)
                streak++;
            else
                streak = 1;
            count += streak;
        }
        return count;
    }
};
