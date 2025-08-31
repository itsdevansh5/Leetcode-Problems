class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string result;
        int start=0;
        for(int i=0;i<s.size();i++){
            if((!st.empty())&& (s[i]==')'))
            st.pop();
            else
            st.push(s[i]);
            if(st.empty()&&i!=0){
                result+=(s.substr(start+1,i-(start+1)));
                start=i+1;

            }
        }
        return result;

        
    }
};