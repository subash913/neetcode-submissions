class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<vector<int>> stack;
        vector<int> result (static_cast<int>(temperatures.size()));
        stack.push_back({temperatures[0],0});
        for (int i = 1; i < temperatures.size(); ++i) {
            while (!stack.empty() && stack.back()[0] < temperatures[i]) {
                result[stack.back()[1]] = i - stack.back()[1];
                stack.pop_back();
            }
            stack.push_back({temperatures[i], i});
            
        }
        while (!stack.empty()) {
            result[stack.back()[1]] = 0;
            stack.pop_back();
        }

        return result;
    }
};
