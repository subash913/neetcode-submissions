class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> nums((grid.size() * grid.size()) + 1);
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                nums[grid[i][j]]++;
            }
        }
        vector<int> out(2);
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == 2) {
                out[0] = i;
            } else if (nums[i] == 0) {
                out[1] = i;
            }
        }
        return out;
    }
};