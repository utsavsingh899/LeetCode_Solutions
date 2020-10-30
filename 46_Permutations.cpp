


class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        res.push_back(nums);
        
        int k = 1;
        for (int i = 2; i <= nums.size(); ++i)
            k *= i;
        
        k--;
        while (k--) {
            next_permutation(nums.begin(), nums.end());
            res.push_back(nums);
        }
        
        return res;
    }
};


