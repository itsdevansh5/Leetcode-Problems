class MinStack {
    stack<pair<int,int>> st;
public:
    void push(int x) {
        int currMin = st.empty() ? x : min(x, st.top().second);
        st.push({x, currMin});
    }
    void pop() {
        if(!st.empty()) st.pop();
    }
    int top() {
        return st.empty() ? -1 : st.top().first;
    }
    int getMin() {
        return st.empty() ? -1 : st.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */