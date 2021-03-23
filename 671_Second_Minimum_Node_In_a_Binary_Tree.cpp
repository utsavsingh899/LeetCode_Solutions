


class Solution {
    void dfs(TreeNode* root, long& min1, long& min2) {
        if (!root)
            return;
        if (min1 < root -> val && root -> val < min2)
            min2 = root -> val;
        else {
            dfs(root -> left, min1, min2);
            dfs(root -> right, min1, min2);
        }
        return;
    }
public:
    int findSecondMinimumValue(TreeNode* root) {
        long min1 = root -> val, min2 = LONG_MAX;
        dfs(root, min1, min2);
        return (min2 < LONG_MAX ? min2 : -1);
    }
};


