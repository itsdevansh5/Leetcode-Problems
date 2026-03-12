class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size();
        
        int g = 0, p = 0, m = 0;
        int lg = 0, lp = 0, lm = 0;

        for(int i = 0; i < n; i++){
            for(char c : garbage[i]){
                if(c == 'G'){
                    g++;
                    lg = i;
                }
                else if(c == 'P'){
                    p++;
                    lp = i;
                }
                else{
                    m++;
                    lm = i;
                }
            }
        }

        // prefix travel time
        vector<int> prefix(n,0);
        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i-1] + travel[i-1];
        }

        int totalTravel = prefix[lg] + prefix[lp] + prefix[lm];

        return g + p + m + totalTravel;
    }
};