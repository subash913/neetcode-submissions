class Solution {
public:
    vector<vector<char>> matrix;
    int numIslands(vector<vector<char>>& grid) {
        matrix = grid;
        int islands = 0;
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[0].size(); ++j) {
                if (matrix[i][j] == '1') {
                    ++islands;
                    dfs(i, j);
                }
            }
        }
        return islands;
    }

    void dfs(int x, int y) {
        if (x < 0 || x >= matrix.size() || y < 0 || y >= matrix[0].size() || matrix[x][y] == '0') {
            return;
        }
        matrix[x][y] = '0';
        dfs(x + 1, y);
        dfs(x - 1, y);
        dfs(x, y + 1);
        dfs(x, y - 1);
        
    }
};
