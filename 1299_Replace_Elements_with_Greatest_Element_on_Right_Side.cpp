





class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> res(arr.size());
        int mx = -1, i;

        for (i = arr.size() - 1; i >= 0; --i) {
            res[i] = mx;
            mx = max(mx, arr[i]);
        }

        return res;
    }
};




