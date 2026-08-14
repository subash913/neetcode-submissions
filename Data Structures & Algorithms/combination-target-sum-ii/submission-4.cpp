class Solution {
public:
    vector<vector<int>> combos;
    vector<int> nums;
    int targ;

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        nums = candidates;
        sort(nums.begin(), nums.end());
        vector<int> empty;
        targ = target;
        makecombos(0, empty, 0);
        return combos;
    }
    
    void makecombos(int index, vector<int>& combo, int sum) {
        if (sum == targ) {
            combos.push_back(combo);
            return;
        }
        if (sum > targ || index == nums.size()) {
            return;
        }
        combo.push_back(nums[index]);
        makecombos(index + 1, combo, sum + nums[index]);
        combo.pop_back();
        while (index + 1 < nums.size() && nums[index] == nums[index + 1]) {
            index++;
        }
        makecombos(index + 1, combo, sum);
        
        
        
    }
};
