class Solution {
public:
    vector<string> pf(string s){
        stack<char> st;
        unordered_map<char,int> m = {{'+',1},{'-',1},{'*',2},{'/',2}};
        vector<string> output;
        int i = 0;

        while(i < s.size()){
            if (s[i] == ' ') { i++; continue; }

            // number
            if(isdigit(s[i])){
                string num;
                while(i < s.size() && isdigit(s[i])){
                    num.push_back(s[i]);
                    i++;
                }
                output.push_back(num);
                continue;
            }

            // operator
            char op = s[i];
            while(!st.empty() && m[st.top()] >= m[op]){
                output.push_back(string(1, st.top()));
                st.pop();
            }
            st.push(op);
            i++;
        }

        while(!st.empty()){
            output.push_back(string(1, st.top()));
            st.pop();
        }

        return output;
    }

    int calculate(string s) {
        vector<string> v = pf(s);
        stack<int> st;

        for(string token : v){
            // operator
            if(token == "+" || token == "-" || token == "*" || token == "/"){
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                int res = 0;

                if(token == "+") res = a + b;
                if(token == "-") res = a - b;
                if(token == "*") res = a * b;
                if(token == "/") res = a / b;

                st.push(res);
            }
            else {
                // number
                st.push(stoi(token));
            }
        }

        return st.top();
    }
};
