class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] == 0) {
                    q.push({i + 1,j});
                    q.push({i - 1,j});
                    q.push({i,j + 1});
                    q.push({i,j - 1});
                }
            }
        }
        int count = 1;
        while (!q.empty()) {
            int x = q.size();
            for (int i = 0; i < x; ++i) {
                pair<int,int> p = q.front();
                q.pop();
                int l = p.first;
                int w = p.second;
                if (l < grid.size() && l > -1 && w < grid[0].size() && w > -1 && grid[l][w] == 2147483647) {
                    grid[l][w] = count;
                    q.push({l + 1,w});
                    q.push({l - 1,w});
                    q.push({l,w + 1});
                    q.push({l,w - 1});
                }
            }
            count++;
        }
    }
};
