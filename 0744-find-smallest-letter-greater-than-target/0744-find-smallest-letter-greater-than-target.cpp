class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0;
        int h=letters.size()-1;
        int ans=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(letters[mid]==target && mid+1<letters.size()) {
                ans=letters[mid+1];
                l=mid+1;
            }
            else if(letters[mid]>target) h=mid-1;
            else l=mid+1;
        }
        if(l+1<=letters.size()) return letters[l];
        else return letters[0];
    }
};