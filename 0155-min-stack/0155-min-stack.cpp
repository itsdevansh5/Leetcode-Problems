class MinStack {
public:
        stack<int>st;
        stack<int>m;
        
        int minv=INT_MAX;
        public:
        MinStack(){
        }
        void push(int val){
            this->st.push(val);
            if((m.empty())||(val<=minv)){
            minv=val;
            m.push(minv);
            }


        }
        void pop(){
            if(st.empty())
            return ;
            else{
                int n=st.top();
                if(n==minv){
                m.pop();
                if(!m.empty())
                minv=m.top();
                else
                minv=INT_MAX;
                }
            st.pop();
            }

        }
        
    
    
    
    int top() {
        if(st.empty())
        return -1;
        else
        return st.top();
        
    }
    
    int getMin() {
        if(m.empty())
        return -1;
        return m.top();
        
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