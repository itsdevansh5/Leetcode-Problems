class Solution {
public:
    double myPow(double x, int n) {
        // Cast n to long long to handle INT_MIN case safely
        long long N = n;
        if (N == 0) return 1;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        if (N == 1) return x;

        double half = myPow(x, N / 2);

        if (N % 2 == 0) {
            return half * half;
        } else {
            return x * half * half;
        }
    }
};
