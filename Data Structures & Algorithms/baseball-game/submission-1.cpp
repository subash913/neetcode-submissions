class Solution {
public:
    int calPoints(vector<string>& operations) {
        int score = 0;
        vector<int> stack;

        for (int i = 0; i < operations.size(); ++i) {
            int temp = 0;
            if (operations[i] == "+") {
                int x = stack.back();
                stack.pop_back();
                temp = x + stack.back();
                stack.push_back(x);
                score += temp;
                stack.push_back(temp);
            } else if (operations[i] == "D") {
                temp = 2 * stack.back();
                score += temp;
                stack.push_back(temp);
            } else if (operations[i] == "C") {
                score -= stack.back();
                stack.pop_back();
            } else {
                temp = stoi(operations[i]);
                score += temp;
                stack.push_back(temp);
            }
            
            cout << score << endl;
        }
        return score;
    }
};