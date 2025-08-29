class Solution {
public:
    string largestOddNumber(string num) {
        int count=-1;
        for(int i=0;i<num.size();i++){
            if((stoi(num.substr(i,1)))%2!=0)
            count=i;
        }
        string s="";
        if(count!=-1)
        s=num.substr(0,count+1);
        return s;
        
        
    }
};