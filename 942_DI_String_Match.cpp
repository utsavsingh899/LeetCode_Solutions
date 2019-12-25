class Solution
{
public:
    vector<int> diStringMatch(string S)
    {
        int l = 0, h = S.size();
        vector<int> res;
        for (char x : S)
        {
            if (x == 'I')
                res.push_back(l++);
            else
                res.push_back(h--);
        }
        res.push_back(l++);
        return res;
    }
};