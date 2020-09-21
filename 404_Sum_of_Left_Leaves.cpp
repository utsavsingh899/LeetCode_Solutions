/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    void dfs(TreeNode* root, bool left, int& res) {
        if (!root)
            return;
        if (left && root -> left == root -> right)
            res += root -> val;
        dfs(root -> left, 1, res);
        dfs(root -> right, 0, res);
        return;
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int res = 0;
        dfs(root, 0, res);
        return res;
    }
};