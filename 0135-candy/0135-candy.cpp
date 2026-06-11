class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int>res(n,1);
        for(int i=0;i<n-1;i++){
            if(ratings[i]<ratings[i+1] && res[i]>=res[i+1])
            res[i+1]=res[i]+1;
            else if(ratings[i]>ratings[i+1] && res[i]<=res[i+1]){
              res[i]=res[i+1]+1;
              int a=i-1;
              int b=i;
              while(a>=0 && ratings[a]>ratings[b] && res[a]<=res[b]){
                res[a]=res[b]+1;
                a--;
                b--;
              }
            } 
        }
        int sum=accumulate(res.begin(),res.end(),0);
        return sum;
    }
};