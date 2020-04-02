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
public:
    int sumRootToLeaf(TreeNode* root, int res = 0) {
        if (!root) return 0;
        res = (res << 1) + root -> val;
        return root -> left == root -> right ? res : sumRootToLeaf(root -> left, res) + sumRootToLeaf(root -> right, res);
    }
};