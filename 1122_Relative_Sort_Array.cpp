unordered_map<int, int> elementrank;
bool mysort(int a, int b) {
    if (elementrank[a] == elementrank[b])
        return a < b;
    return elementrank[a] < elementrank[b];
}
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int k = 0;
        for (auto x: arr2)
            elementrank[x] = k++;
        for (auto x: arr1) {
            if (elementrank.find(x) == elementrank.end())
                elementrank[x] = 1005;
        }
        sort(arr1.begin(), arr1.end(), mysort);
        elementrank.clear();
        return arr1;
    }
};