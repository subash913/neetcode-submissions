class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        vector<int> stack;
        
        for (int i = 0; i < tokens.size(); ++i) {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
                int x = stack.back();
                stack.pop_back();
                int y = stack.back();
                stack.pop_back();
                if (tokens[i] == "+") {
                    stack.push_back(y + x);
                } else if (tokens[i] == "-") {
                    stack.push_back(y - x);
                } else if (tokens[i] == "*") {
                    stack.push_back(y * x);
                } else {
                    stack.push_back(y / x);
                }
            } else {
                stack.push_back(stoi(tokens[i]));
            }
        }

        return stack.back();
    }
};
