class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); ++i) {
            s.insert(nums[i]);
        }
        vector<int> out;
        for (int i = 1; i <= nums.size(); ++i) {
            if (!s.contains(i)) {
                out.push_back(i);
            }
        }
        return out;
    }
};