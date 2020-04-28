class Solution
{
public:
    int numSpecialEquivGroups(vector<string> &A)
    {
        int res = 1;
        string t1, t2;
        vector<pair<string, string>> str(A.size());
        for (int i = 0; i < A.size(); ++i)
        {
            t1 = "";
            t2 = "";
            for (int j = 0; j < A[i].size(); ++j)
            {
                (j & 1) ? t2 += A[i][j] : t1 += A[i][j];
            }
            sort(t1.begin(), t1.end());
            sort(t2.begin(), t2.end());
            str[i].first = t1;
            str[i].second = t2;
        }
        sort(str.begin(), str.end());
        for (auto x : str)
            cout << x.first << ' ' << x.second << '\n';
        for (int i = 1; i < str.size(); ++i)
        {
            if ((str[i].first != str[i - 1].first) || (str[i].second != str[i - 1].second))
                ++res;
        }
        return res;
    }
};