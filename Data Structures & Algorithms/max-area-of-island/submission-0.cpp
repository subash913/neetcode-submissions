class Solution {
public:
    int sum = 0;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                dfs(i, j, grid);
                if (sum > max) {
                    max = sum;
                }
                sum = 0;
            }
        }
        return max;
    }

    void dfs(int x, int y, vector<vector<int>>& grid) {
        if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || grid[x][y] == 0) {
            return;
        }
        sum++;
        grid[x][y] = 0;
        dfs(x + 1, y, grid);
        dfs(x - 1, y, grid);
        dfs(x, y + 1, grid);
        dfs(x, y - 1, grid);

    }
};
