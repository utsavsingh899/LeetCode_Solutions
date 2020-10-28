

class Solution {
    void dfs(TreeNode* root, vector<int>& res, int depth) {
        if (!root)
            return;
        
        if (res.size() == depth)
            res.push_back(root -> val);
        
        dfs(root -> right, res, depth + 1);
        dfs(root -> left, res, depth + 1);
        
        return;
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        
        dfs(root, res, 0);
        
        return res;
    }
};
