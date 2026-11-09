class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> heap(nums.begin(), nums.end());
        vector<int> out;
        while(!heap.empty()) {
            out.push_back(heap.top());
            heap.pop();
        }
        return out;
    }
};