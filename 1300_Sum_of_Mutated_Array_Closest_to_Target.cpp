





class Solution {
public:
    int findBestValue(vector<int>& arr, int target) {
        int n = arr.size(), i = 0;
        
        sort(arr.begin(), arr.end());
        
        while (i < n && target > arr[i] * (n - i))
            target -= arr[i++];
        
        return i == n ? arr[n - 1] : int(round((target - 0.0001) / (n - i)));
    }
};




