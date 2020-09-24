
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> f(5, 0);
        for (int x : bills) {
            ++f[x / 5];
            if (x == 10) {
                if (f[1] >= 1)
                    --f[1];
                else
                    return false;
            }
            else if (x == 20) {
                if (f[2] >= 1 && f[1] >= 1)
                    --f[1], --f[2];
                else if (f[1] >= 3)
                    f[1] -= 3;
                else
                    return false;
            }
        }        
        return true;
    }
};