class Solution {
public:
    int calPoints(vector<string>& operations) {
         stack<int>st;
    for (const string& op : operations) {
        if (op == "+") {
            int a = st.top();
            st.pop();
            int b=st.top();
            st.pop();
            st.push(b);
            st.push(a);
            st.push(a+b);
        } else if (op == "D") {
            int doubleLast = 2 * st.top();
            st.push(doubleLast);
        } else if (op == "C") {
            st.pop();
        } else {
            st.push(stoi(op));
        }
    }
    int total = 0;
    while(!st.empty()) {
        total +=(st.top());
        st.pop();
    }
    return total;
    }
};