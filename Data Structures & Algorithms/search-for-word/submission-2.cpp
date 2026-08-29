class Solution {
public:
    vector<vector<char>> matrix;
    vector<vector<bool>> used;
    string target;
    bool contains;

    bool exist(vector<vector<char>>& board, string word) {
        matrix = board;
        contains = false;
        used.assign(board.size(), vector<bool>(board[0].size(), false));
        target = word;
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[0].size(); ++j) {
                string curr;
                dfs(i, j, curr);
                if (contains) {
                    return true;
                }
            }
        }
        return false;
        
    }

    void dfs(int x, int y, string& curr) {
        if (x < 0 || x >= matrix.size() || y < 0 || y >= matrix[0].size() || used[x][y] == true || curr.size() > target.size() || contains == true) {
            return;
        }
        used[x][y] = true;
        curr.push_back(matrix[x][y]);
        if (curr == target) {
            contains = true;
            return;
        }
        dfs(x + 1, y, curr);
        dfs(x - 1, y, curr);
        dfs(x, y + 1, curr);
        dfs(x, y - 1, curr);
        curr.pop_back();
        used[x][y] = false;
        
    }
};
