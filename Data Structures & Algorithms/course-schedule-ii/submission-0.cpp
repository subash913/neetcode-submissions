class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> indegree(numCourses, 0);
        vector<vector<int>> neighbors(numCourses);

        for (int i = 0; i < prerequisites.size(); ++i) {
            int course = prerequisites[i][0];
            int pre = prerequisites[i][1];
            indegree[course]++;
            neighbors[pre].push_back(course);
        }

        queue<int> q;
        for (int i = 0; i < indegree.size(); i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }

        }
        vector<int> order;
        while (!q.empty()) {
            int x = q.front();
            q.pop();
            cout << x << endl;
            for (int i = 0; i < neighbors[x].size(); i++) {
                indegree[neighbors[x][i]]--;
                if (indegree[neighbors[x][i]] == 0) {
                    q.push(neighbors[x][i]);
                }
            }
            order.push_back(x);
        }

        if (order.size() != numCourses) {
            return {};
        }
        return order;
    }
};
