class Solution {
    unordered_map<int, int> power;
    int getPower(int x) {
        if (power[x])
            return power[x];
        
        if (x & 1)
            power[x] = 1 + getPower(3 * x + 1);
        else
            power[x] = 1 + getPower(x / 2);
        
        return power[x];
    }
public:
    int getKth(int lo, int hi, int k) {
        power[1] = 1;
        
        vector<pair<int, int>> temp;
        for (int i = lo; i <= hi; ++i)
            temp.push_back({getPower(i), i});
        
        nth_element(temp.begin(), temp.begin() + k - 1, temp.end());
        
        return temp[k - 1].second;
    }
};