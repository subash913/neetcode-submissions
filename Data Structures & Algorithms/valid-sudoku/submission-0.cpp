class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> count;
        unordered_set<char> count2;
        unordered_set<char> count3;
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board.size(); ++j) {
                if (count.contains(board[i][j]) && board[i][j] != '.') {
                    return false;
                }
                if (count2.contains(board[j][i]) && board[j][i] != '.') {
                    return false;
                }
                if (board[i][j] != '.') {
                    count.insert(board[i][j]);
                }
                
                if (board[j][i] != '.') {
                    count2.insert(board[j][i]);
                }
            }
            count.clear();
            count2.clear();
        }

        
        for (int br = 0; br < 3; ++br) {
            for (int bc = 0; bc < 3; ++bc) {
                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 3; ++j) {
                        if (count3.contains(board[br*3 + i][bc*3 + j]) && board[br*3 + i][bc*3 + j] != '.') {
                            return false;
                        }
                        if (board[br*3 + i][bc*3 + j] != '.') {
                            count3.insert(board[br*3 + i][bc*3 + j]);
                        }
                        
                    }
                }
                count3.clear();
            }
        }
        return true;
    }
};
