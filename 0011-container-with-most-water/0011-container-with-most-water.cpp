class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxA=INT_MIN;
        while(i<j){
            int a=height[i];
            int b=height[j];
         int currA=(min(a,b)*(j-i));
         if(currA>maxA) maxA=currA;

         if(a>b) j--;
         else if(a<b) i++;
         else{
            i++;
            j--;
         }
        }
        return maxA;
    }
};