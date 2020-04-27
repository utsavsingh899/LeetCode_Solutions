class Solution {
public:
    bool checkValidString(string s) {
        stack<int> left, ast;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') left.push(i);
            else if (s[i] == '*') ast.push(i);
            else {
                if (!left.empty())
                    left.pop();
                else if (!ast.empty())
                    ast.pop();
                else
                    return false;
            }
        }
        while (!left.empty() && !ast.empty()) {
            if (left.top() > ast.top())
                return false;
            left.pop();
            ast.pop();
        }
        return left.empty();
    }
};