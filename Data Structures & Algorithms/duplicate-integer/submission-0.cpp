class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> set;
        for (unsigned int i = 0; i < nums.size(); ++i) {
            if (set.contains(nums[i])) {
                return true;
            } else {
                set.insert(nums[i]);
            }
        }
        return false;
    }
};