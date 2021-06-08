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
    TreeNode* build(int& rootIdx, int left, int right, vector<int>& preorder, vector<int>& inorder) {
        if (left > right)
            return nullptr;
        
        int pivot = left;
        while (inorder[pivot] != preorder[rootIdx])
            ++pivot;
        
        ++rootIdx;
        
        TreeNode* newNode = new TreeNode(inorder[pivot]);
        newNode -> left = build(rootIdx, left, pivot - 1, preorder, inorder);
        newNode -> right = build(rootIdx, pivot + 1, right, preorder, inorder);
        
        return newNode;
    }
    
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int rootIdx = 0;
        
        return build(rootIdx, 0, inorder.size() - 1, preorder, inorder);
    }
};