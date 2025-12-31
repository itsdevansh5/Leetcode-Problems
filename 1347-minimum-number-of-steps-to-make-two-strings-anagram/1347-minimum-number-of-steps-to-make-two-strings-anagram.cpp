class Solution {
public:
    int minSteps(string s, string t) {
        int arr[26]={0};
        for(auto i:s){
            arr[i-'a']++;
        }
        for(auto i:t){
            arr[i-'a']--;
        }
        int count=0;
        for(auto i:arr){
            if(i<0)
             count-=i;
        }
        return count;
    }
};