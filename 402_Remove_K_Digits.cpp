class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for (char c : num) {
            while (!st.empty() && st.top() > c && k) {
                st.pop();
                k--;
            }
            st.push(c);
        }
        while (!st.empty() && k--)
            st.pop();
        string res = "";
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        while (!res.empty() && res[0] == '0')
            res.erase(res.begin());
        return res.empty() ? "0" : res;
    }
};