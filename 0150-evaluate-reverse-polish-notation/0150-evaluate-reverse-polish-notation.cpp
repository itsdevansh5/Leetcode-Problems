class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<int>st;
       for(string &s:tokens){
         if((s=="+" || s=="-" || s=="*" || s=="/")&& st.size()>=2){
            int a,b;
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();

            if(s=="+") st.push(b+a);
            else if(s=="-") st.push(b-a);
            else if(s=="*") st.push(b*a);
            else st.push(b/a);
         }
         else
         st.push(stoi(s));

           
       }
       return st.top();
    }
};