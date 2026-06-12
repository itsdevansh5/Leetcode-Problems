class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        int n=ages.size();
        std::sort(ages.begin(),ages.end());
        int tot=0;
        int j=0;
        for(int i=0;i<n;i++){

            int r=ages[i]+14;
            while(j<i && 2*ages[j]<=r){
              j++;
            }
            tot+=i-j;
        }
        int i=0;
        int curr=1;
        while(i<n-1){
          if(ages[i]==ages[i+1] && 2*ages[i]>ages[i]+14){
             tot+=curr;
             curr++;
          }
          else curr=1;
          i++;
        }
        return tot;
    }

};