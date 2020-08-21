


class Solution {
    bool dfs(TreeNode* root, vector<int>& arr, int i) {
        if (root -> val != arr[i])
            return false;
        if (i == arr.size() - 1)
            return root -> left == root -> right;
        if (root -> left != NULL && dfs(root -> left, arr, i + 1))
            return true;
        if (root -> right != NULL && dfs(root -> right, arr, i + 1))
            return true;
        return false;
    }
public:
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        if (!root)
            return arr.size() == 0;
        return dfs(root, arr, 0);
    }
};

