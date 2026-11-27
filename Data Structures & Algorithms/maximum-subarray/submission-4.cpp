class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }
        int sum = 0;
        int max = nums[0];
        for (int i = 0; i < nums.size(); ++i) {
            if (sum + nums[i] > 0) {
                sum += nums[i];
                if (sum > max) {
                    max = sum;
                }
            } else {
                if (max < nums[i]) {
                    max = nums[i];
                }
                sum = 0;
            }
        }
        return max;
    }
};
