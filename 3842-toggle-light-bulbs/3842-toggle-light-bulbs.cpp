class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int>arr(100,0);
        for(auto i:bulbs){
           arr[i-1]++;

        }
        vector<int>res;
        for(int i=0;i<100;i++){
            if(arr[i]%2!=0) res.push_back(i+1);
        }
        return res;
    }
};