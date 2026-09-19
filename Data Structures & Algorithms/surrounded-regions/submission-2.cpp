class Solution {
public:
    bool isRegion;

    void solve(vector<vector<char>>& board) {
        vector<vector<bool>> visited(board.size(), vector<bool>(board[0].size(), false));
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[0].size(); ++j) {
                if (board[i][j] == 'O' && visited[i][j] == false) {
                    vector<pair<int,int>> region;
                    isRegion = true;
                    dfs(i,j, board, visited, region);
                    if (isRegion) {
                        for (int i = 0; i < region.size(); ++i) {
                            board[region[i].first][region[i].second] = 'X';
                            
                        }
                    }
                }
            }
        }
    }

    void dfs(int x, int y, const vector<vector<char>>& board, vector<vector<bool>>& visited, vector<pair<int,int>>& region) {
        
        if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size() || board[x][y] == 'X' || visited[x][y] == true) {
            return;
        }
        if (x == 0 || x == board.size() - 1 || y == 0 || y == board[0].size() - 1) {
            isRegion = false;
        }
        visited[x][y] = true;
        region.push_back({x,y});
        dfs(x+1, y, board, visited, region);
        dfs(x, y+1, board, visited, region);
        dfs(x, y-1, board, visited, region);
        dfs(x-1, y, board, visited, region);
    }


};
