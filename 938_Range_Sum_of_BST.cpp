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
    int rangeSumBST(TreeNode* root, int L, int R) {
        if (!root)
            return 0;
        int sum = 0, curr_val = root -> val;
        if (L <= curr_val && curr_val <= R)
            sum += curr_val;
        if (L < curr_val)
            sum += rangeSumBST(root -> left, L, R);
        if (curr_val < R)
            sum += rangeSumBST(root -> right, L, R);
        return sum;
    }
};