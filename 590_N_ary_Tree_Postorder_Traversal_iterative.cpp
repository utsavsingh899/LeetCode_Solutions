/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        if (!root)
            return {};
        stack<Node*> st;
        vector<int> res;
        Node* curr;
        st.push(root);
        while (!st.empty()) {
            curr = st.top();
            st.pop();
            res.push_back(curr -> val);
            for (auto x: curr -> children)
                st.push(x);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};