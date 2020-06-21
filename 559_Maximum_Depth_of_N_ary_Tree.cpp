





class Solution {
    int dfs(Node* root) {
        if (!root)
            return 0;
        int res = 0;
        for (int i = 0; i < root -> children.size(); ++i)
            res = max(res, dfs(root -> children[i]));
        return res + 1;
    }
public:
    int maxDepth(Node* root) {
        return dfs(root);
    }
};




