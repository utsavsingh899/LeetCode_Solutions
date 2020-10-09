





class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i = 0, j = n;
        vector<int> res;
        
        for (int i = 0; i < n; ++i, ++j) {
            res.push_back(nums[i]);
            res.push_back(nums[j]);
        }
        
        return res;
    }
};




