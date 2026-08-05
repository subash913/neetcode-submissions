class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> array(26);

        for (int i = 0; i < tasks.size(); ++i) {
            array[tasks[i] - 'A']++;
        }

        int count = 0;
        int remaining = tasks.size();
        priority_queue<int, vector<int>> max_heap;

        for (int i = 0; i < array.size(); ++i) {
            if (array[i] != 0) {
                max_heap.push(array[i]);
            }
            
        }
        queue<int> q;
        for (int i = 0; i < n && remaining > 0; ++i) {
            count++;
            if (!max_heap.empty()) {
                int x = max_heap.top() - 1;
                max_heap.pop();
                remaining--;
                q.push(x);
            } else {
                q.push(0);
            }
            
            
        }

        while (remaining > 0) {
            count++;
            if (!max_heap.empty()) {
                int x = max_heap.top() - 1;
                max_heap.pop();
                remaining--;
                q.push(x);
            } else {
                q.push(0);
            }
            if (!q.empty()) {
                if (q.front() != 0) {
                    max_heap.push(q.front());
                }
                
                q.pop();
            }
            
        }

        return count;


    }
};
