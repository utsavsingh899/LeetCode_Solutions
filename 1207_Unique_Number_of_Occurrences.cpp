class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> amap;
        unordered_map<int, int>::iterator itr;
        set<int> fmap;
        int i;
        for (i = 0; i < arr.size(); ++i)
            ++amap[arr[i]];
        for (itr = amap.begin(); itr != amap.end(); ++itr)
            if (fmap.count(itr->second) != 0)
                break;
            else
                fmap.insert(itr->second);
        if (itr == amap.end())
            return true;
        return false;
    }
};