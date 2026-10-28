class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<pair<int,int>> stack;
        for (int i = 0; i < prices.size(); ++i) {
            while (!stack.empty()) {
                if (stack.back().first >= prices[i]) {
                    prices[stack.back().second] -= prices[i];
                    stack.pop_back();
                } else {
                    break;
                }
            }
            stack.push_back({prices[i], i});
        }
        return prices;
    }
};
