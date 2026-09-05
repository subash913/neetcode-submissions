class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> rotten;
        int fresh = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                 if (grid[i][j] == 1) {
                    fresh++;
                 }
                 if (grid[i][j] == 2) {
                    rotten.push({i+1,j});
                    rotten.push({i-1,j});
                    rotten.push({i,j+1});
                    rotten.push({i,j-1});
                    
                 }
            }
        }
        int mins = 0;
        if (fresh == 0) {
            return mins;
        }
        while (!rotten.empty()) {
            int x = rotten.size();
            for (int i = 0; i < x; ++i) {
                pair<int,int> p = rotten.front();
                rotten.pop();
                if (p.first > -1 && p.first < grid.size() && p.second > -1 && p.second < grid[0].size() && grid[p.first][p.second] == 1) {
                    rotten.push({p.first + 1, p.second});
                    rotten.push({p.first - 1, p.second});
                    rotten.push({p.first, p.second + 1});
                    rotten.push({p.first, p.second - 1});
                    grid[p.first][p.second] = 2;
                    fresh--;
                }
            }
            mins++;
            if (fresh == 0) {
                return mins;
            }
        }
        if (fresh != 0) {
            return -1;
        }
        return mins;
    }
};
