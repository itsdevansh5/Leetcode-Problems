class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1) return false;
        int sum = 0;
        for(int i = 2; i <= sqrt(num); i++){
            if(num % i == 0){
          sum += i;
          sum+=(num/i);
            }
        }
        if(sum+1 == num) return true;
        return  false;
    }
};