class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]+carry<10){
                digits[i]+=1;
                carry=0;
                break;
            }
            else{
                digits[i]=0;
            }

        }
        if(carry){
            vector<int>ans;
            ans.push_back(1);
            for(auto i:digits){
                ans.push_back(i);
            }
            return ans;
        }
        return digits;
        
    }
};