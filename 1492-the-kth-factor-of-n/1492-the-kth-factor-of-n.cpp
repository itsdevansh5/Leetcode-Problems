class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> small, large;
        
        for(int i = 1; i * i <= n; i++) {
            if(n % i == 0) {
                small.push_back(i);
                if(i != n / i)
                    large.push_back(n / i);
            }
        }
        
        // small = increasing, large = decreasing
        if(k <= small.size()) return small[k - 1];
        
        k -= small.size();
        reverse(large.begin(), large.end());
        
        if(k <= large.size()) return large[k - 1];
        
        return -1;
    }
};