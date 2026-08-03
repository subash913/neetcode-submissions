class Solution {
public:
    int findMin(vector<int> &nums) {
        int i = 1;
        int j = nums.size() - 1;
        if (nums[0] <= nums[nums.size() - 1]) {
            return nums[0];
        }
        while (i <= j) {
            int z = (i + j) / 2;
            int x = nums[z];
            int y = nums[z - 1];
            if (x < y) {
                return x;
            }

            if (x >= nums[0]) {
                i = z + 1;
            } else {
                j = z - 1;
            }

            

        }



        return -1;
    }
};
