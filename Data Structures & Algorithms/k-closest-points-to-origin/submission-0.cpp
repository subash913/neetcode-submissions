class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> max_heap;
        for (int i = 0; i < points.size(); ++i) {
            int x = (points[i][0] * points[i][0] + points[i][1] * points[i][1]);
           
            max_heap.push({x, points[i]});
            if (max_heap.size() > k) {
                max_heap.pop();
            }
            
        }
        vector<vector<int>> closest;
        while (!max_heap.empty()) {
            closest.push_back(max_heap.top().second);
            max_heap.pop();
        }
        return closest;

    }
};
