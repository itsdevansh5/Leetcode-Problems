class Solution {
public:
    string decodeString(string s) {
        int i=0;
        stack<pair<string,int>>st;
        string curr;
        int num=0;
        while(i<s.size()){
           if(i<s.size() && isdigit(s[i])){
                num=num*10+(s[i]-'0');
            }
            else if(i<s.size() && s[i]=='['){
                st.push({curr,num});
                curr="";
                num=0;
            }
            else if(i<s.size() && s[i]==']'){
                int a = st.top().second;
                string b= st.top().first;
                st.pop();
                for(int k=0;k<a;k++){
                    b+=curr;
                }
                curr=b;

            }
            else{
                curr+=s[i];
            }
            i++;
            
            
           
        
            
           
        }
        return curr;
    }
};