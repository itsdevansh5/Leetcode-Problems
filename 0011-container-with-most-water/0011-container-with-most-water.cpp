class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxA=INT_MIN;
        while(i<j){
         int currA=(min(height[i],height[j])*(j-i));
         if(currA>maxA) maxA=currA;

         if(height[i]>height[j]) j--;
         else if(height[i]<height[j]) i++;
         else{
            i++;
            j--;
         }
        }
        return maxA;
    }
};