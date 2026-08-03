class Solution {
public:
    int search(vector<int>& nums, int target) {
       int i = 0;
       int j = nums.size() - 1;
       int index = -1;
       while (i < nums.size() && j < nums.size() && abs(i - j) > 1) {
        int x = nums[(i + j) / 2];
        if (x == target) {
            index = (i+j)/2;
            return index;
        }
        if (x < target) {
            i = (i + j) / 2;
        } else {
            j = (i + j) / 2;
        }
       }
       if (nums[i] == target) {
        return i;
       }

       if (nums[j] == target) {
        return j;
       }

       return -1;
    }
    
};
