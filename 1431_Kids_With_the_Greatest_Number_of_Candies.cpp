class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res(candies.size());
        int mx = -1;
        for (int x : candies)
            mx = max(mx, x);
        for (int i = 0; i < candies.size(); ++i) {
            if (candies[i] + extraCandies >= mx)
                res[i] = true;
        }
        return res;
    }
};