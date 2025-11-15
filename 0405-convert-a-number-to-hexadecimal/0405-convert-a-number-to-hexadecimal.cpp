class Solution {
public:
    string tobin(int num){
        string output;
        if(num>0){
            
            while(num>0){
                output+=((num%2)+'0');
                num=num/2;
            }
        

        }
        else{
          unsigned int n=num;
            while(n>0){
                output+=((n%2)+'0');
                n=n/2;

            }
          

        

        }
        std::reverse(output.begin(),output.end());
        return output;
    }
    string toHex(int num) {
        if(num==0) return "0";
        string bin=tobin(num);
        string output;
        vector<char>m(16);
        m[0] = '0';
m[1] = '1';
m[2] = '2';
m[3] = '3';
m[4] = '4';
m[5] = '5';
m[6] = '6';
m[7] = '7';
m[8] = '8';
m[9] = '9';
m[10] = 'a';
m[11] = 'b';
m[12] = 'c';
m[13] = 'd';
m[14] = 'e';
m[15] = 'f';
        int i=bin.size()-1;
        while(i>=0){
            int j=0;
            int n=0;
            while(i>=0 && j<=3){
                if(bin[i]=='1')
                n+=pow(2,j);
                j++;
                i--;

            }
       output+=m[n];

            
        }
        std::reverse(output.begin(),output.end());
        return output;


        
    }
};