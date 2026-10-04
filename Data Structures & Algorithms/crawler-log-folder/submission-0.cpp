class Solution {
public:
    int minOperations(vector<string>& logs) {
        vector<int> stack;
        for (int i = 0; i < logs.size(); ++i) {
            if (logs[i] == "../") {
                if (!stack.empty()) {
                    stack.pop_back();
                }
            } else if (logs[i][0] != '.') {
                stack.push_back(1);
            }
        }
        return stack.size();
    }
};