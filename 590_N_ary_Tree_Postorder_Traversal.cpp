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
class Solution
{
public:
    vector<int> post(Node *root, vector<int> &v)
    {
        if (!root)
            return v;
        for (auto x : root->children)
            post(x, v);
        v.push_back(root->val);
        return v;
    }
    vector<int> postorder(Node *root)
    {
        vector<int> v;
        return post(root, v);
    }
};