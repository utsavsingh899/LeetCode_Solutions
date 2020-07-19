/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int recurMax(TreeNode* root, int& res) {
        if (!root)
            return 0;
        int l = max(0, recurMax(root -> left, res));
        int r = max(0, recurMax(root -> right, res));
        res = max(res, l + r + root -> val);
        return max(l , r) + root -> val;
    }
public:
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        res = max(res, recurMax(root, res));
        return res;
    }
};