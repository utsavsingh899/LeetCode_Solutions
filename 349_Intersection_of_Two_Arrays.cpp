class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        vector<int> res;
        for (auto x: nums1)
            freq[x] = 1;
        for (auto x: nums2)
            if (freq[x] == 1)
                freq[x] = 2;
        for (auto x: nums1)
            if (freq[x] == 2) {
                res.push_back(x);
                freq[x] = 0;
            }
        return res;
    }
};