
class Solution {
    TreeNode* insert(TreeNode* root, int x) {
        if (!root) {
            TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
            root -> val = x;
            root -> left = NULL;
            root -> right = NULL;
            return root;
        }
        if (root -> val > x)
            root -> left = insert(root -> left, x);
        else
            root -> right = insert(root -> right, x);
        return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = NULL;
        root = insert(root, preorder[0]);
        for (int i = 1; i < preorder.size(); ++i)
            insert(root, preorder[i]);
        return root;
    }
};