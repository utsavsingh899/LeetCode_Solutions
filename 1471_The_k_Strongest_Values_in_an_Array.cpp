
class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        int m, n = arr.size();
        vector<int> res;
        
        nth_element(arr.begin(), arr.begin() + (n - 1) / 2, arr.end());
        m = arr[(n - 1) / 2];
        
        nth_element(arr.begin(), arr.begin() + k, arr.end(), [&] (int& a, int& b) {
            if (abs(a - m) == abs(b - m))
                return a > b;
            return abs(a - m) > abs(b - m);
        });
        
        for (int i = 0; i < k; ++i)
            res.push_back(arr[i]);
        
        return res;
    }
};
