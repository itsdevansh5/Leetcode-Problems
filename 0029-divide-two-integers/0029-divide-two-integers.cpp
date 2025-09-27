class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle overflow case
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        
        // Handle simple case
        if (divisor == 1) {
            return dividend;
        }
        
        // Determine sign
        bool isPositive = (dividend > 0 && divisor > 0) || 
                         (dividend < 0 && divisor < 0);
        
        // Convert to negative to avoid overflow
        long long a = dividend > 0 ? -(long long)dividend : dividend;
        long long b = divisor > 0 ? -(long long)divisor : divisor;
        
        long long quotient = 0;
        
        while (a <= b) {  // Both negative, so <= means |a| >= |b|
            long long currentDivisor = b;
            long long currentQuotient = 1;
            
            // Find largest multiple using bit shifting
            while (currentDivisor >= (LLONG_MIN >> 1) && 
                   a <= (currentDivisor << 1)) {
                currentDivisor <<= 1;  // Double the divisor
                currentQuotient <<= 1; // Double the count
            }
            
            a -= currentDivisor;
            quotient += currentQuotient;
        }
        
        long long result = isPositive ? quotient : -quotient;
        
        // Handle overflow
        if (result > INT_MAX) return INT_MAX;
        if (result < INT_MIN) return INT_MIN;
        
        return (int)result;
    }
};
