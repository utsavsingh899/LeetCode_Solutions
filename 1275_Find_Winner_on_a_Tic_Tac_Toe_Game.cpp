class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<int> A(8, 0), B(8, 0);
        int r, c;
        for (int i = 0; i < moves.size(); ++i) {
            vector<int>& player = (i & 1) ? B : A;
            r = moves[i][0];
            c = moves[i][1];
            ++player[r];
            ++player[c + 3];
            if (r == c)
                ++player[6];
            if (r == 2 - c)
                ++player[7];
        }
        for (auto x: A)
            if (x == 3)
                return "A";
        for (auto x: B)
            if (x == 3)
                return "B";
        return moves.size() < 9 ? "Pending" : "Draw";
    }
};