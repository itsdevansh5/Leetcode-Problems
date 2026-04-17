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
        int l=0, h=mountainArr.length()-1;

        // find peak
        while(l<h){
            int mid=l+(h-l)/2;
            if(mountainArr.get(mid) < mountainArr.get(mid+1)) l=mid+1;
            else h=mid;
        }

        int peak = l;

        // check peak
        if(mountainArr.get(peak) == target) return peak;

        // search left
        int left = bs1(0, peak-1, mountainArr, target);
        if(left != -1) return left;

        // search right
        return bs2(peak+1, mountainArr.length()-1,mountainArr, target);
    }
};