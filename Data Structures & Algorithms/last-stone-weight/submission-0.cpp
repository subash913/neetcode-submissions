class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int, vector<int>> max_heap;
        for (int i = 0; i < stones.size(); i++) {
            max_heap.push(stones[i]);
        }
        while (max_heap.size() > 1) {
           int x = max_heap.top();
           max_heap.pop();
           int y = max_heap.top();
           max_heap.pop(); 
           if (x != y) {
            max_heap.push(abs(x - y));
           }
        }
        if (max_heap.empty()) {
            return 0;
        }
        return max_heap.top();
    }
};
