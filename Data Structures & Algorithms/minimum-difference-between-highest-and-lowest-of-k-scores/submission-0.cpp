class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = k - 1;
        int min = nums[j] - nums[i];
        while (j < nums.size()) {
            if (nums[j] - nums[i] < min) {
                min = nums[j] - nums[i];
            }
            ++i;
            ++j;
        }
        return min;
    }
};