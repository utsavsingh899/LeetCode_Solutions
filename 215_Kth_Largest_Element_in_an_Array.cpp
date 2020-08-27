





class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        shuffle(nums.begin(), nums.end(), default_random_engine(0));
        
        nth_element(nums.begin(), nums.begin() + k - 1, nums.end(), [&](int& a, int& b) {
            return a > b;
        });
        
        return nums[k - 1];
    }
};




