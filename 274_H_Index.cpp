




class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.begin(), c.end(), greater<int>());
        
        int res = 0;
        for (int i = 1; i <= c.size(); ++i) {
            if (c[i - 1] >= i)
                res = i;
            else
                break;
        }
        
        return res;
    }
};



