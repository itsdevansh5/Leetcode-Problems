class Solution {
public:
    int longestValidParentheses(string s) {
         int n=s.size();
         stack<int>st;
         st.push(-1);
         int maxl=0;
         int curl=0;
         for(int i=0;i<n;i++){
          char a=s[i];
          if(st.top()>=0 && s[st.top()]=='(' && a==')'){
            st.pop();
            curl=i-st.top();
          }

          else st.push(i);

          maxl=max(maxl,curl);
        
          
        
          

         }
         return maxl;
    }
};