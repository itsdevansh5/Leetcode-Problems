class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            char a=s[i];
            if(!st.empty() && st.top()==a)
            st.pop();
            else
            st.push(a);
        }
        string output;
        while(!st.empty()){
            char b=st.top();
            st.pop();
            output+=b;
        }
        std::reverse(output.begin(),output.end());
        return output;
    }
};