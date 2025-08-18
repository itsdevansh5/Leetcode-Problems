class Solution {
public:
    bool isPossible(vector<int>nums,int h,int k){
        int hours=0;
        for(auto i:nums){
            hours+=(i/k);
            if(i%k!=0)
            hours+=1;


        }
        if(hours<=h)
        return true;
        else
        return false;
        

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        std::sort(piles.begin(),piles.end());
        int max=*(piles.end()-1);
        int l=1;
        int hi=max;
        while(l<hi){
            int mid=l+(hi-l)/2;
            if(isPossible(piles,h,mid))
            hi=mid;
            else
            l=mid+1;
        }
        return l;


        
    }
};