class StockSpanner {
    vector<int> v;
    stack<int> st;
    int i, t;
public:
    StockSpanner() {}
    int next(int price) {
        v.push_back(price);
        
        if (st.empty() || v[st.top()] > price) {
            st.push(i);
            i++;
            return 1;
        }
        else {
            while (!st.empty() && v[st.top()] <= price)
                st.pop();
            t = (st.empty() ? i + 1 : i - st.top());
            st.push(i);
            i++;
            return t;
        }
        return -1;
    }
};