class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> min_heap;
    int s;
    KthLargest(int k, vector<int>& nums) {
        s = k;
        for (int i = 0; i < nums.size(); ++i) {
           if (i < k) {
            min_heap.push(nums[i]);
           } else {
            if (nums[i] > min_heap.top()) {
                min_heap.pop();
                min_heap.push(nums[i]);
            }
           }
        }
    }
    
    int add(int val) {
        if (min_heap.size() < s) {
            min_heap.push(val);
            return min_heap.top();
        }
        if (val > min_heap.top()) {
            min_heap.pop();
            min_heap.push(val);
        }
        return min_heap.top();
    }
};
