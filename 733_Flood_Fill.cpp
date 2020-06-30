class Solution {
    void dfs(vector<vector<int>>& image, int x, int y, int c, int o) {
        if (0 <= x && x < image.size() && 0 <= y && y < image[0].size() && image[x][y] == o) {
            image[x][y] = c;
            dfs(image, x + 1, y, c, o);
            dfs(image, x, y + 1, c, o);
            dfs(image, x - 1, y, c, o);
            dfs(image, x, y - 1, c, o);
        }
        return;
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if (image.size() == 0 || image[0].size() == 0)
            return {};
        if (image[sr][sc] != newColor)
            dfs(image, sr, sc, newColor, image[sr][sc]);
        return image;
    }
};