class Solution {
public:
    int longestMountain(vector<int>& arr) {
        const int n = arr.size();
        
        if (n < 3)
            return 0;
        
        int res = 0, i = 1;
        while (i < n - 1) {
            if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
                int curr = 1;
                
                int j = i;
                while (j >= 1 && arr[j - 1] < arr[j]) {
                    ++curr;
                    --j;
                }
                
                while (i < n - 1 && arr[i] > arr[i + 1]) {
                    ++curr;
                    ++i;
                }
                
                res = max(res, curr);
            }
            else
                ++i;
        }
        
        return res;
    }
};