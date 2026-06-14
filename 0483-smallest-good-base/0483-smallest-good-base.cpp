class Solution {
public:
    long long exp(long long num,int k){
      long long res=1;
      while(k>0){
        if(k%2!=0){
          if(res>LLONG_MAX/num) return LLONG_MAX;
          res*=num;
        }
        k/=2;
        if(k==0) break;
        if(num>LLONG_MAX/num) return LLONG_MAX;
        num*=num;
        
      }
      return res;
    }
    long long root(long long num,int i){
      long long l=1;
      long long h=num;
      while(l<=h){
        long long mid=l+(h-l)/2;
        long long v=exp(mid,i);
        if(v>=num) h=mid-1;
        else l=mid+1;
      }
      return l;
    }
    long long solve(long long num,int i){
      long long h=root(num,i-1)-1;
      long long l=2;
      while(l<=h){
        long long mid=l+(h-l)/2;
        long long res=0;
        long long k=1;
        for(int b=1;b<=i;b++){
          if(res>LLONG_MAX-k) {
            res=LLONG_MAX;
            break;
          }
          res+=k;
          if(b==i) break;
         
          if(k>LLONG_MAX/mid) {
            res=LLONG_MAX;
            break;
          }
           k*=mid;
          
          
        }
        if(res==num) return mid;
        else if(res>num) h=mid-1;
        else l=mid+1;
      }
      return -1;

    }
    string smallestGoodBase(string n) {
        long long num=stoll(n);
        int m=log2(num)+1;
        for(int i=m;i>=2;i--){
          long long ans=solve(num,i);
          if(ans>0) return to_string(ans);
          
        }
        return to_string(num-1);
    }
};