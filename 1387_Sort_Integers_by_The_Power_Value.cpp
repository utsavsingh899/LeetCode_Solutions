unordered_map<int, int> mp;
bool mysort(int a, int b) {
    if (mp[a] == mp[b])
        return a < b;
    return mp[a] < mp[b];
}
class Solution {
public:
    int func(int i) {
        int res = 0;
        while (i != 1) {
            if (i & 1)
                i = i * 3 + 1;
            else
                i /= 2;
            ++res;
        }
        return res;
    }
    int getKth(int lo, int hi, int k) {
        vector<int> res;
        for (int i = lo; i <= hi; ++i)
            res.push_back(i);
        for (int i = lo; i <= hi; ++i)
            mp[i] = func(i);
        sort(res.begin(), res.end(), mysort);
        mp.clear();
        return res[k - 1];
    }
};