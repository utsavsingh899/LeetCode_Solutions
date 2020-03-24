class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        map<int, int> rank;
        int k = 0;
        for (auto x: temp) {
            if (rank.find(x) == rank.end())
                rank[x] = k++;
            else
                ++k;
        }
        vector<int> res;
        for (auto x: nums)
            res.push_back(rank[x]);
        return res;
    }
};
