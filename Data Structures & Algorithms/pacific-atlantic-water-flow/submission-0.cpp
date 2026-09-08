class Solution {
public:
    vector<vector<int>> grid;
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        grid = heights;
        vector<vector<int>> nodes;
        vector<vector<bool>> pacific(heights.size(), vector<bool>(heights[0].size(), false));
        vector<vector<bool>> atlantic(heights.size(), vector<bool>(heights[0].size(), false));
        for (int i = 0; i < heights[0].size(); ++i) {
            dfs(0,i, pacific, -1);
            dfs(heights.size() - 1, i, atlantic, -1);
        }
        for (int i = 0; i < heights.size(); ++i) {
            dfs(i, 0, pacific, -1);
            dfs(i, heights[0].size() - 1, atlantic, -1);
        }
        for (int i = 0; i < heights.size(); ++i) {
            for (int j = 0; j < heights[0].size(); ++j) {
                if (pacific[i][j] && atlantic[i][j]) {
                    nodes.push_back({i,j});
                }
            }
        }
        return nodes;
    }

    void dfs(int x, int y, vector<vector<bool>>& visited, int prev) {
        if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || visited[x][y] == true || grid[x][y] < prev) {
            return;
        }
        int val = grid[x][y];
        visited[x][y] = true;
        dfs(x+1, y, visited, val);
        dfs(x-1, y, visited, val);
        dfs(x, y-1, visited, val);
        dfs(x, y+1, visited, val);
    }

};
