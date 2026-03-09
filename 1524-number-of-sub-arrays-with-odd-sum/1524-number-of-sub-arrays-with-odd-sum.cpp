class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int odd = 0;
        int even = 1;
        int curpar = 0;
        int count = 0;
        int mod = 1e9 + 7;

        for(int i = 0; i < arr.size(); i++) {
            curpar = (curpar + arr[i]) % 2;

            if(curpar == 0){
                count = (count + odd) % mod;
                even++;
            }
            else{
                count = (count + even) % mod;
                odd++;
            }
        }

        return count;
    }
};