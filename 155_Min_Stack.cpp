
class MinStack {
public:
    stack<int> st, mn;
    
    void push(int x) {
        if (mn.empty() || x <= mn.top())
            mn.push(x);
        st.push(x);
    }
    
    void pop() {
        if (st.top() == mn.top())
            mn.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mn.top();
    }
};