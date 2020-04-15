class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int a = 0;
        string res;
        for (auto v : shift)
            a += (v[0] ? v[1] : -v[1]);
        cout << a;
        if (!a)
            return s;
        if (a > 0) { 
            a %= s.size();
            cout << a;
            for (int i = s.size() - a; i < 2 * s.size() - a; ++i)
                res.push_back(s[i % s.size()]); 
        }
        else {
            a *= -1;
            a %= s.size();
            for (int i = a; i < s.size() + a; ++i)
                res.push_back(s[i % s.size()]);
        }
        return res;
    }
};