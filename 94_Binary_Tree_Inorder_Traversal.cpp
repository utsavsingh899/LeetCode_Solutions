class Solution {
    void dfs(TreeNode* root, vector<int>& res) {
        if (!root)
            return;
        dfs(root -> left, res);
        res.push_back(root -> val);
        dfs(root -> right, res);
        return;
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        dfs(root, res);
        return res;
    }
};