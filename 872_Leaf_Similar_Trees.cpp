/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> v1, v2;
class Solution {
public:
    void leafs(TreeNode* root, bool flag) {
        if (!root)
            return;
        if (root -> left == root -> right) {
            flag ? v2.push_back(root -> val) : v1.push_back(root -> val);
            return;
        }
        leafs(root -> left, flag);
        leafs(root -> right, flag);
        return;
            
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        v1.clear(), v2.clear();
        leafs(root1, 0), leafs(root2, 1);
        return v1 == v2;
    }
};