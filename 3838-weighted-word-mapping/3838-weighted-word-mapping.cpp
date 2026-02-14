class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string output;
        for(auto i:words){
            int tot=0;
            for(auto j:i){
                tot+=weights[j-'a'];
            }
            tot%=26;
            output+=char(97+25-tot);
        }
        return output;
    }
};