class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        long long count = 0;
        int mod = 1e9 + 7;

        vector<long long> freq(101, 0);
        for(int x : arr) freq[x]++;

        for(int i = 0; i <= 100; i++){
            if(freq[i] == 0) continue;

            for(int j = i; j <= 100; j++){
                if(freq[j] == 0) continue;

                int k = target - (i + j);

                if(k < 0 || k > 100 || freq[k] == 0) continue;

                // IMPORTANT: enforce ordering
                if(k < j) continue;

                long long a = freq[i];
                long long b = freq[j];
                long long c = freq[k];

                if(i == j && j == k){
                    // all same
                    count += (a * (a - 1) * (a - 2)) / 6;
                }
                else if(i == j && j != k){
                    // i == j < k
                    count += (a * (a - 1) / 2) * c;
                }
                else if(i < j && j == k){
                    // i < j == k
                    count += a * (b * (b - 1) / 2);
                }
                else{
                    // all different
                    count += a * b * c;
                }

                count %= mod;
            }
        }

        return count;
    }
};