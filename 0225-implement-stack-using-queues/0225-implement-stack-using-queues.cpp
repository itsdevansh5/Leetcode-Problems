#include <deque>
using namespace std;

class MyStack {
public:
    deque<int> st;

    MyStack() {
    }

    void push(int x) {
        st.push_back(x);
    }
    
    int pop() {
        if (!st.empty()) {
            int b = st.back();
            st.pop_back();
            return b;
        }
        return -1;  // or throw exception for empty stack
    }
    
    int top() {
        if (!st.empty()) {
            return st.back();
        }
        return -1;  // or throw exception for empty stack
    }
    
    bool empty() {
        return st.empty();
    }
};
