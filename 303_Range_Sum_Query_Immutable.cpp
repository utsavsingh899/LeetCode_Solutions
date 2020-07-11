


class NumArray {
    vector<int> prefix;
public:
    NumArray(vector<int>& nums) {
        prefix.resize(nums.size());
        for(int i = 0; i < nums.size(); ++i)
            prefix[i] = (i == 0 ? nums[i] : prefix[i - 1] + nums[i]);
    }
    
    int sumRange(int i, int j) {
        return (i == 0 ? prefix[j] : prefix[j] - prefix[i - 1]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */


