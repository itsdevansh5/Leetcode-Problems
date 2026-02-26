class Solution {
public:
    int pivotInteger(int n) {
        int rightsum=(n*(n+1))/2;
        int leftsum=0;
        for(int i=1;i<=n;i++){
            rightsum-=i;
            if(rightsum==leftsum) return i;
            leftsum+=i;
        }
        return -1;
    
    }
};