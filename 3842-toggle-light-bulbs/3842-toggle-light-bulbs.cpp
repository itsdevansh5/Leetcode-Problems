class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<bool>arr(100,false);
        for(auto i:bulbs){
            arr[i-1]=!arr[i-1];

        }
        vector<int>res;
        for(int i=0;i<100;i++){
            if(arr[i]==true) res.push_back(i+1);
        }
        return res;
    }
};