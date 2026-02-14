class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string output;

        for(const string& word : words){
            int tot = 0;

            for(char ch : word){
                tot += weights[ch - 'a'];
            }

            tot %= 26;

            output += char('a' + 25 - tot);
        }

        return output;
    }
};
