class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal = nums.size() - 1;
        int i = goal - 1;
        while (i > -1) {
            if (goal - i <= nums[i]) {
                goal = i;
            }
            i--;
        }

        return goal == 0;
    }
};
