class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> stck;
        for (auto x: S) {
            if (stck.empty() || stck.top() != x)
                stck.push(x);
            else
                stck.pop();
        }
        string res = "";
        while (!stck.empty()) {
            res = stck.top() + res;
            stck.pop();
        }
        return res;
    }
};