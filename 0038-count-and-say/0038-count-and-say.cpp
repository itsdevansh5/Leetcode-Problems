class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
        return "1";
        else{
            string org=countAndSay(n-1);
            int i=0;
            string output;
            while(i<org.size()){
               char a=org[i];
               int count=0;
               while(i<org.size() && org[i]==a){
                   i++;
                   count++;
               }
               output += to_string(count);
output += a;


            }
            return output;
        }
        return "1";
    }
};