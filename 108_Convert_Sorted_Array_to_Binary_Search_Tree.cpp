



class Solution {
    TreeNode* dfs(vector<int>& nums, int lo, int hi) {
        if (lo >= hi)
            return NULL;
        
        int mid = lo + (hi - lo) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        
        root -> left = dfs(nums, lo, mid);
        root -> right = dfs(nums, mid + 1, hi);
        
        return root;
    } 
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return dfs(nums, 0, nums.size());
    }
};


