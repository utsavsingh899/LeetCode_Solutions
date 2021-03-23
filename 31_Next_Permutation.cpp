void nextPermutation(vector<int>& nums) {
    int idx1 = nums.size(), idx2 = nums.size();
    
    for (int i = nums.size() - 2; i >= 0; --i)
        if (nums[i] < nums[i + 1]) {
            idx1 = i;
            break;
        }
    
    if (idx1 == nums.size()) {
        reverse(nums.begin(), nums.end());
        return;
    }
    
    for (int i = nums.size() - 1; i >= 0; --i)
        if (nums[i] > nums[idx1]) {
            idx2 = i;
            break;
        }
    
    swap(nums[idx1], nums[idx2]);
    reverse(nums.begin() + idx1 + 1, nums.end());
    
    return;
}