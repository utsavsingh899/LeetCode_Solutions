class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int i, j, ri, rj, res = 0;
        for (i = 0; i < 8; ++i)
            for (j = 0; j < 8; ++j)
                if (board[i][j] == 'R')
                    goto line;
        line : 
        ri = i;
        rj = j;
        for (i = ri; i >= 0; --i) {
            cout << "a ";
            if (board[i][rj] == 'B')
                break;
            else if (board[i][rj] == 'p') {
                res += 1;
                break;
            }
        }
        for (j = rj; j >= 0; --j) {
            cout << "b ";
            if (board[ri][j] == 'B')
                break;
            else if (board[ri][j] == 'p') {
                res += 1;
                break;
            }
        }
        for (i = ri; i < 8; ++i) {
            cout << "c ";
            if (board[i][rj] == 'B')
                break;
            else if (board[i][rj] == 'p') {
                res += 1;
                break;
            }
        }
        for (j = rj; j < 8; ++j) {
            cout << "d ";
            if (board[ri][j] == 'B')
                break;
            else if (board[ri][j] == 'p') {
                res += 1;
                break;
            }
        }
        return res;
    }
};