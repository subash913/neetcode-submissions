class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int j = 1;
        int max = 0;
        while (j < prices.size()) {
            
            if (prices[i] > prices[j]) {
                i++;
            } else {
                if (prices[j] - prices[i] > max) {
                    max = prices[j] - prices[i];
                    
                }
                j++;
            }
        }
        return max;
    }
};
