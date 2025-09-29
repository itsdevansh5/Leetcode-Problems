class Solution {
public:
    string addBinary(string a, string b) {
        string output;
         int i=a.size()-1;
         int j=b.size()-1;
         int m,n,sum;
         int carry=0;
         while(i>=0 || j>=0){
            if(i<0)m=0;
            else m=a[i]-'0';
            if(j<0)n=0;
            else n=b[j]-'0';
            sum=m+n+carry;
            if(sum==2){
                carry=1;
                sum=0;
            }
            else if(sum==3){
                carry=1;
                sum=1;
            }
            else{
                carry=0;
            }
           output.push_back('0'+sum);
           i--;
           j--;
            


         }
         if(carry)
         output.push_back('1');
         std::reverse(output.begin(),output.end());
         return output;
        
    }
};