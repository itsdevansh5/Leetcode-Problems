class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0) return 1;
        
        int res = 1; 
        
        for (int i = 1; i <= n && n<11; i++) {
            int count = 9;        
            int available = 9;   
            
            for (int j = 2; j <= i; j++) {
                count *= available;
                available--;
            }
            
            res += count;
        }
        
        return res;
    }
};