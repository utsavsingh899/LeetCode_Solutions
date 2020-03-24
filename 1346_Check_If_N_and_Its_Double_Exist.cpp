class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> mymap;
        for (auto x: arr)
            ++mymap[x];
        for (auto x: arr) {
            if (x == 0) {
                if (mymap[0] >= 2)
                    return true;
                else
                    continue;
            }
            if (mymap[2 * x] == 1)
                return true;
        }
        return false;
    }
};