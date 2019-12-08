class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        int sum = 0, qry, idx, val;
        vector<int> res;
        for (int x: A)
            if (!(x&1))
                sum += x;
        for (int i = 0; i < queries.size(); ++i) {
            val = queries[i][0];
            idx = queries[i][1];
            if (A[idx]&1 && val&1) {
                sum += A[idx] + val;
                A[idx] += val;
            }
            else if (A[idx]&1 && !(val&1)) {
                A[idx] += val;
            }
            else if (!(A[idx]&1) && val&1) {
                sum -= A[idx];
                A[idx] += val;
            }
            else if (!(A[idx]&1) && !(val&1)) {
                sum += val;
                A[idx] += val;
            }
            res.push_back(sum);
        }
        return res;
    }
};
