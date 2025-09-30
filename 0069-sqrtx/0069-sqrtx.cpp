class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;

        long long ans = 1;
        for (long long i = 1; i <= x / 2; i++) {
            if (i * i == x) {
                return (int)i;
            }
            if (i * i > x) {
                ans = i - 1;
                break;
            }
            ans=i;
        }
        return (int)ans;
    }
};
