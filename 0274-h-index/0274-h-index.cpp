class Solution {
public:
    bool isPossible(vector<int>&citations,int v){
       int l=0;
       int h=citations.size()-1;
       while(l<=h){
        int mid=l+(h-l)/2;
        if(citations[mid]>=v) h=mid-1;
        else l=mid+1;
       }
       return (citations.size()-l>=v);

    }
    int hIndex(vector<int>& citations) {
      int n=citations.size();
        std::sort(citations.begin(),citations.end());
        int low=0;
        int high=1000;
        int res=0;
        while(low<=high){
          int mid=low+(high-low)/2;
          if(isPossible(citations,mid)){
             res=mid;
             low=mid+1;
          }
          else high=mid-1;
        }
        return res;
    }
};