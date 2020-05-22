class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> ms;
        for (auto x: nums) {
            if (ms.find(x) != ms.end())
                return true;
            ms.insert(x);
        }
        return false;
    }
};