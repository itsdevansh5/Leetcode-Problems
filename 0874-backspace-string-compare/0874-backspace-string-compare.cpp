class Solution {
public:
    string org(string s){
        stack<char>st;
        for(auto i:s){
            if(!st.empty() && i=='#')
            st.pop();
            else if(i!='#')
            st.push(i);
        }
        string output;
        while(!st.empty()){
            output+=st.top();
            st.pop();
        }
        std::reverse(output.begin(),output.end());
        return output;
    }
    bool backspaceCompare(string s, string t) {
        string a=org(s);
        string b=org(t);
        if(a==b)
        return true;
        else
        return false;

        
    }
};