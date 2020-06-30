




class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int res = 0, i, j;
        for (i = 0; i < arr1.size(); ++i) {
            for (j = 0; j < arr2.size(); ++j) {
                if (abs(arr1[i] - arr2[j]) <= d)
                    break;
            }
            if (j == arr2.size())
                ++res;
        }
        return res;
    }
};



