class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if (coordinates.size() == 2)
            return true;
        double m = 0.0, _m = 0.0;
        int a = coordinates[0][0], b = coordinates[0][1];
        int x = coordinates[1][0], y = coordinates[1][1];
        m = (((double)y - b) / ((double)x - a));
        for (int i = 2; i < coordinates.size(); ++i) {
            x = coordinates[i][0];
            y = coordinates[i][1];
            _m = (((double)y - b) / ((double)x - a));
            if (m != _m)
                break;
        }
        return _m == m ? true : false;
    }
};