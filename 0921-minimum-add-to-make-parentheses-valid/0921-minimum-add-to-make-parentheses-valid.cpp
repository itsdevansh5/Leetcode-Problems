class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int n=s.size();
        for(int i=0;i<n;i++){
          char t=s[i];
          if(t=='(') st.push(t);
          else if(!st.empty() && st.top()=='(') st.pop();
          else st.push(t);
        }
        return st.size();
    }
};