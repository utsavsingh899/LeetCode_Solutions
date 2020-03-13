class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> f1, f2;
        vector<int> res;
        for (auto x: nums1)
            ++f1[x];
        for (auto x: nums2)
            ++f2[x];
        for (auto x: nums1)
            if (f1[x] > 0 && f2[x] > 0) {
                res.push_back(x);
                --f1[x];
                --f2[x];
            }
        return res;
    }
};