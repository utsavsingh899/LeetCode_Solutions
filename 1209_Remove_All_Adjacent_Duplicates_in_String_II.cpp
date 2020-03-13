class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> stck;
        string res = "";
        int mx = k - 1;
        for (auto x: s) {
            if (stck.empty() || stck.top().first != x)
                stck.push({x, 1});
            else if (stck.top().second != k - 1)
                stck.push({x, stck.top().second + 1});
            else
                while (mx--)
                    stck.pop();
            mx = k - 1;
        }
        while (!stck.empty()) {
            res += stck.top().first;
            stck.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};