/**
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */
class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int> d = binaryMatrix.dimensions();
        int x = 0, y = d[1] - 1, mn = d[1];
        while (x < d[0] && y >= 0) {
            if (binaryMatrix.get(x, y) == 0)
                ++x;
            else {
                mn = min(mn, y);
                --y;
            }
        }
        if (mn == d[1])
            return -1;
        return mn;
    }
};