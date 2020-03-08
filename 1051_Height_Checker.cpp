class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> perfect(heights.size());
        int res = 0;
        for (int i = 0; i < heights.size(); ++i)
            perfect[i] = heights[i];
        sort(perfect.begin(), perfect.end());
        for (int i = 0; i < heights.size(); ++i)
            if (perfect[i] != heights[i])
                ++res;
        return res;
    }
};