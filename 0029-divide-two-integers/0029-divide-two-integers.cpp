class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) 
            return INT_MAX;
        if (divisor == 1) return dividend;
        if (divisor == -1) return -dividend;
        
        // Handle overflow case
        
        
        long long low = 0, high = abs((long long)dividend);
        long long quotient = 0;
        
        while (low <= high) {
            long long mid = low + ((high - low) >> 1);
            
            // Check if mid * divisor <= dividend
            if (abs(mid * divisor) <= abs((long long)dividend)) {
                quotient = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        // Apply sign
        if ((dividend < 0) ^ (divisor < 0)) {
            return -quotient;
        }
        return quotient;
    }
};
