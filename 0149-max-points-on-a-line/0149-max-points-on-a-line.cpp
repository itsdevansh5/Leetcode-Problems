class Solution {
public:
    int gcd(int m,int n){
      if(m==0 || n==0){
        int a=(m>0)?m:n;
        return a;
      }
      while(n>0){
        int d=n;
        n=m%n;
        m=d;
      }
      return m;
    }
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size();
        if(n==1) return 1;
        int maxp=0;
        for(int i=0;i<n-1;i++){
          unordered_map<string,int>mp;
          int duplicates =0;
          for(int j=i+1;j<points.size();j++){
             int x1=points[i][0];
             int y1=points[i][1];
             int x2=points[j][0];
             int y2=points[j][1];
             if(x1==x2 && y1==y2) {
              duplicates ++;
              continue;
             }
             int n=y2-y1;
             int d=x2-x1;
             int g=gcd(abs(n),abs(d));
             char sign=(n*d>=0)?'+':'-';
             string m=sign+to_string(abs(n)/g)+"/"+to_string(abs(d)/g);
             mp[m]++;
             maxp=max(maxp,mp[m]+duplicates);
          }


        }
        return maxp+1;
        

    }
};