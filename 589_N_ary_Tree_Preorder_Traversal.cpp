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
    vector<int> pre(Node* root, vector<int> &v) {
        if (!root)
            return v;
        v.push_back(root -> val);
        for (auto x: root -> children)
            pre(x, v);
        return v;
    }
    vector<int> preorder(Node* root) {
        vector<int> v = {};
        return pre(root, v);
    }
};