class Solution {
public:
    int numOfreq(vector<int>&ages,int x){
      double lb=0.5*x+7;
      int ub=x;
      int l=0;
      int h=ages.size()-1;
      while(l<=h){
          int mid=l+(h-l)/2;
          if(ages[mid]>lb) h=mid-1;
          else l=mid+1;

      }
      int lidx=l;
      l=0;
      h=ages.size()-1;
      int uidx=-1;
      while(l<=h){
        int mid=l+(h-l)/2;
        if(ages[mid]==ub){
          uidx=mid;
          l=mid+1;
        }
        else if(ages[mid]>ub) h=mid-1;
        else l=mid+1;
      }
     if(uidx-lidx>0) return uidx-lidx;
     else return 0;

    }
    int numFriendRequests(vector<int>& ages) {
        int n=ages.size();
        std::sort(ages.begin(),ages.end());
        int ct=0;
        for(int i=0;i<n;i++){
          ct+=numOfreq(ages,ages[i]);
        }
        return ct;
    }
};