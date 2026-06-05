class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        if(m>n) return findMedianSortedArrays(nums2,nums1);

        int partSize=(m+n+1)/2;
        int l=0;
        int h=min(partSize,m);
        double ans=0;
        while(l<=h){
          int mid=l+(h-l)/2;
          int x = mid;
int y = partSize - x;

int l1 = (x == 0) ? INT_MIN : nums1[x-1];
int r1 = (x == m) ? INT_MAX : nums1[x];

int l2 = (y == 0) ? INT_MIN : nums2[y-1];
int r2 = (y == n) ? INT_MAX : nums2[y];
       if(l1>r2) h=mid-1;
       else if(l2>r1) l=mid+1;
       else {
        double m1=max(l1,l2);
        double m2=min(r1,r2);
        if((m+n)%2) ans=m1;
        else ans=(m1+m2)/2;
        break;
       }
        }
        return ans;

        
    }
};