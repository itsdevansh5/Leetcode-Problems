/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int bs1(int l,int h,MountainArray &mountainArr,int target){
         while(l<=h){
            int mid=l+(h-l)/2;
            int v=mountainArr.get(mid);
            if(v==target) return mid;
            else if(v<target) l=mid+1;
            else h=mid-1;
        }
        return -1;
    }
    int bs2(int l,int h,MountainArray & mountainArr,int target){
         while(l<=h){
            int mid=l+(h-l)/2;
            int v=mountainArr.get(mid);
            if(v==target) return mid;
            else if(v<target) h=mid-1;
            else l=mid+1;
        }
        return -1;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
       int l=0;
       int n=mountainArr.length();
       int h=mountainArr.length()-1;
       while(l<h){
        int mid=l+(h-l)/2;
        if(mid+1<n && mountainArr.get(mid)<mountainArr.get(mid+1)) l=mid+1;
        else h=mid;
       }
       int peak=l;
       int ans=-1;
       if(mountainArr.get(peak)==target) ans=peak;
        int a=bs1(0,peak-1,mountainArr,target);
        int b=bs2(peak+1,n-1,mountainArr,target);
        if(a>=0) return a;
        else if(ans>=0) return ans;
        else return b;
       
    }
};