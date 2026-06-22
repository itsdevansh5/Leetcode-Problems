class Solution {
public:
    bool check(long long n,int x){
      int l=n%10;
      int f=0;

      while(n>0){
         f=n%10;
         n/=10;
      }
      return (l==f && l==x);
    }
    int countValidSubarrays(vector<int>& nums, int x) {
        int n=nums.size();
       
        int cnt=0;
        for(int i=0;i<n;i++){
           long long cur=0;
          for(int j=i;j<n;j++){
            cur+=nums[j];
            if(check(cur,x)) cnt++;
          }
        }
        return cnt;
    }
};