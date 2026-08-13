class Solution {
public:
    vector<vector<int>> combos;
    vector<int> integers;
    int targ;

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        integers = nums;
        vector<int> empty;
        targ = target;
        sumup(empty, 0, 0);
        return combos;

    }

    void sumup(vector<int>& combo, int index, int sum) {
        if (sum == targ) {
            combos.push_back(combo);
            return;
        }
        if (sum > targ || index == integers.size()) {
            return;
        }
        sumup(combo, index + 1, sum);
        combo.push_back(integers[index]);
        sum += integers[index];
        sumup(combo, index, sum);
        
        combo.pop_back();
        sum -= integers[index];


    }
};
