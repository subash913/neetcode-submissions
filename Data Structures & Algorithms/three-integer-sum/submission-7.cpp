class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> matrix;
        for (unsigned int h = 0; h < nums.size() - 2; ++h) {
            if (h > 0 && nums[h] == nums[h-1]) {
                continue;
            }
            int sum = 0 - nums[h];
            unsigned int i = h + 1;
            int j = nums.size() - 1;
            while (i != j) {
                if (i > h + 1 && nums[i] == nums[i - 1]) {
                    i++;
                    continue;
                }
                if (nums[i] + nums[j] > sum) {
                    j--;
                } else if (nums[i] + nums[j] < sum) {
                    i++;
                } else {
                    matrix.push_back({nums[h], nums[i], nums[j]});
                    i++;
                }
            }
        }
        return matrix;
    }
};
