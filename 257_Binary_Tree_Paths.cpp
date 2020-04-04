/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<string> res;
class Solution {
public:
    void paths(TreeNode* root, vector<int> v) {
        if (!root)
            return;
        v.push_back(root -> val);
        if (root -> left == root -> right) {
            string str = "";
            str += to_string(v[0]);
            for (int i = 1; i < v.size(); ++i) {
                str += "->";
                str += to_string(v[i]);
            }
            res.push_back(str);
        }
        paths(root -> left, v);
        paths(root -> right, v);
        return;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        res.clear();
        paths(root, {});
        return res;
    }
};