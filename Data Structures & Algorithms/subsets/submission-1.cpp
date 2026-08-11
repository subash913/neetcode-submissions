class Solution {
public:
    vector<int> y;
    vector<vector<int>> combos;
    vector<vector<int>> subsets(vector<int>& nums) {
        y = nums;
        vector<int> empty;
        helper(0, empty);
        return combos;
    }

    void helper(int index, vector<int>& num) {
        if (index == y.size()) {
            combos.push_back(num);
            return;
        }
        helper(index + 1, num);
        num.push_back(y[index]);
        helper(index + 1, num);
        num.pop_back();
    }
};
