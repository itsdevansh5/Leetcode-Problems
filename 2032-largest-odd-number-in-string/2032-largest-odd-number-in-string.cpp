class Solution {
public:
    string largestOddNumber(string num) {
        int count=-1;
        for(int i=num.size()-1;i>=0;i--){
            if(((int)(num[i]-'0'))%2!=0){
            count=i;
            break;
            }
        }
        string s="";
        if(count!=-1)
        s=num.substr(0,count+1);
        return s;
        
        
    }
};