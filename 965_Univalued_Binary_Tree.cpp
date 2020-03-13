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
    set<int> nodeSet;
    void countNode(TreeNode* root) {
        if (root == NULL)
            return;
        nodeSet.insert(root->val);
        countNode(root->left);
        countNode(root->right);
        return;
    }
    bool isUnivalTree(TreeNode* root) {
        countNode(root);
        if (nodeSet.size() > 1)
            return false;
        return true;
    }
};