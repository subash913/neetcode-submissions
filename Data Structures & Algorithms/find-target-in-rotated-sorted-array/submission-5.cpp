class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 1;
        int j = nums.size() - 1;
        int min = -1;
        if (nums[0] <= nums[nums.size() - 1]) {
            min = 0;
        }
        if (min == -1) {
            while (i <= j) {
                int z = (i + j) / 2;
                int x = nums[z];
                int y = nums[z - 1];
                if (x < y) {
                    min = z;
                    break;
                }
                if (x >= nums[0]) {
                    i = z + 1;
                } else {
                    j = z - 1;
                }
            }
        }
        if (min == 0) {
            i = 0;
            j = nums.size() - 1;
        } else if (target >= nums[0]) {
            i = 0;
            j = min - 1;
        } else {
            i = min;
            j = nums.size() - 1;
        }
        while (i <= j) {
            int mid = (i + j) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[mid] < target) {
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }
        return -1;
    }
};
