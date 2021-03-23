vector<vector<int>> merge(vector<vector<int>>& intervals) {
    if (intervals.size() == 0)
        return {};
    
    sort(intervals.begin(), intervals.end(), [&](vector<int>& a, vector<int>& b) {
        return a[0] < b[0];
    });
    
    vector<vector<int>> res;
    res.push_back(intervals[0]);
    int end = res[0][1];
    for (int i = 1; i < intervals.size(); ++i) {
        if (end >= intervals[i][0])
            end = max(end, intervals[i][1]);
        else {
            res.back()[1] = end;
            res.push_back(intervals[i]);
            end = res.back()[1];
        }
    }
    res.back()[1] = end;
    
    return res;
}