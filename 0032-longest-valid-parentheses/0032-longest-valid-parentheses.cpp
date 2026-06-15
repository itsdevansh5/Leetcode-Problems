class Solution {
public:
    int longestValidParentheses(string s) {
         int n=s.size();
         stack<int>st;
         int maxl=0;
         int curl=0;
         for(int i=0;i<n;i++){
          char a=s[i];
          if(!st.empty() && s[st.top()]=='(' && a==')'){
            st.pop();
            if(!st.empty()) curl=i-st.top();
            else curl=i+1;
          }

          else st.push(i);

          maxl=max(maxl,curl);
        
          
        
          

         }
         return maxl;
    }
};