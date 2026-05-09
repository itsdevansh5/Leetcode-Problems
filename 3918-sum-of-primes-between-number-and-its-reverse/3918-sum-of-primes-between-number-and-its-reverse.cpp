class Solution {
public:
    bool prime(int n){
        if(n < 2) return false;

        for(int i = 2; i * i <= n; i++){
            if(n % i == 0)
                return false;
        }

        return true;
    }

    int sumOfPrimesInRange(int n) {
        int original = n;
        int rev = 0;

        while(n > 0){
            rev = rev * 10 + (n % 10);
            n /= 10;
        }

        int l = min(original, rev);
        int h = max(original, rev);

        int sum = 0;

        for(int i = l; i <= h; i++){
            if(prime(i))
                sum += i;
        }

        return sum;
    }
};