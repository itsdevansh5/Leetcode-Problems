class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2)
        return true;
        int count=0;
        vector<int>arr;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
            count++;
            arr.push_back(i);
            }
        }
        if(count==2 && (s1[arr[0]]==s2[arr[1]] && s1[arr[1]]==s2[arr[0]]))
        return true;
        else
        return false;
        
    }
};