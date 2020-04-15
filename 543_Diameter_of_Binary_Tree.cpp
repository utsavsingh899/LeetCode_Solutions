class Solution {
    int depth(TreeNode* root) {
        if (!root)
            return 0;
        return 1 + max(depth(root -> left), depth(root -> right));
    }
    int diameter(TreeNode* root) {
        if (!root)
            return 0;
        int ld = depth(root -> left);
        int rd = depth(root -> right);
        int l = diameter(root -> left);
        int r = diameter(root -> right);
        return max(1 + ld + rd, max(l, r));
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        return max(0, diameter(root) - 1);
    }
};