class Solution {
public:
    int getTime(vector<int> A, vector<int> B) {
        return max(abs(A[0] - B[0]), abs(A[1] - B[1]));
    }
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int time = 0;
        for (int i = 1; i < points.size(); ++i) {
            time += getTime(points[i-1], points[i]);
        }
        return time;
    }
};
