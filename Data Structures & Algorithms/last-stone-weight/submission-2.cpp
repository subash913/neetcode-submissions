class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> max_heap(stones.begin(), stones.end());

        while (max_heap.size() > 1) {
           int x = max_heap.top();
           max_heap.pop();
           int y = max_heap.top();
           max_heap.pop(); 
           if (x != y) {
            max_heap.push(x - y);
           }
        }
        if (max_heap.empty()) {
            return 0;
        }
        return max_heap.top();
    }
};
