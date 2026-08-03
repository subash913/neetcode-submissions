class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0;
        int j = matrix.size() - 1;
        int index = -1;

        while (i <= j) {
            int x = (i + j) / 2;
            if (target >= matrix[x][0] && target <= matrix[x][matrix[0].size() - 1]) {
                index = x;
                break;
            }
            if (matrix[x][0] > target) {
                j = x - 1;
            } else {
                i = x + 1;
            }
        }

        if (index == -1) {
            return false;
        }

        i = 0;
        j = matrix[0].size() - 1;

        while (i <= j) {
            int x = (i + j) / 2;
            if (matrix[index][x] == target) {
                return true;
            }

            if (matrix[index][x] > target) {
                j = x - 1;
            } else {
                i = x + 1;
            }
        }

        return false;
    } 
};
