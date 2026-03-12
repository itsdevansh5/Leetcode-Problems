class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int g=0;
        int p=0;
        int m=0;
        int lg=0;
        int lm=0;
        int lp=0;
        for(int i=0;i<garbage.size();i++){
         string &house= garbage[i];
           for(int j=0;j<house.size();j++){
                  if(house[j]=='G'){
                    g++;
                    lg=i;
                  }
                  else if(house[j]=='P') {
                     p++;
                     lp=i;
                  }
                  else {
                 m++;
                 lm=i;
                  }
           }
        }
        int tr=0;
        for(int i=1;i<=lm;i++) tr+=(travel[i-1]);
         for(int i=1;i<=lp;i++) tr+=(travel[i-1]);
          for(int i=1;i<=lg;i++) tr+=(travel[i-1]);
        return (p+g+m+tr);
    }
};