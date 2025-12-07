class Solution {
public:
    int countOdds(int low, int high) {
        int k=high-low;
        if(k>0)
        k-=1;
        if(low%2!=0 && high %2!=0){
            k=(k%2==0)?(k/2):(k-1)/2;
            if(low==high)
            return k+1;
            return k+2;
        }
        else if(low%2==0 && high %2==0){
             k=(k%2==0)?(k/2):(k+1)/2;
             return k;
        }
        else{
             k=k/2;
             return k+1;
        }
        return 0;
    }
};