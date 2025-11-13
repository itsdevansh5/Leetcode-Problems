class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        for(int i=0;i<fruits.size();i++){
            for(int j=0;j<baskets.size();j++){
                if(baskets[j]!=-1 && baskets[j]>=fruits[i]){
                    baskets[j]=-1;
                    fruits[i]=-1;
                    break;
                }
            }
        }
        int count=0;
        for(auto i:fruits){
            if(i!=-1)
            count++;
        }
        return count;
        
    }
};