class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        vector<int>freq(101,0);
        for(int i:arr) freq[i]++;
        int count=0;
        int mod=1e9+7;
       for(int i = 0; i < arr.size(); i++){
    freq[arr[i]]--;  

    for(int j = i + 1; j < arr.size(); j++){
        freq[arr[j]]--;  

        int req = target - (arr[i] + arr[j]);

        if(req >= 0 && req <= 100){
            count = (count + freq[req]) % mod;
        }
    }

    
    for(int j = i + 1; j < arr.size(); j++){
        freq[arr[j]]++;
    }
}
        return count;
    }
};