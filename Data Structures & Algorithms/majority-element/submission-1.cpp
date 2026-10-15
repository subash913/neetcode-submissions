class Solution {
public:
    int majorityElement(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       int count = 1;
       int n = nums.size() / 2;
       for (int i = 1; i < nums.size(); ++i) {
        if (count > n) {
            return nums[i - 1];
        }
        if (nums[i] == nums[i - 1]) {
            count++;
        } else {
            count = 1;
        }
       } 
       if (count > n) {
            return nums[nums.size() - 1];
        }
       return -1;
    }
};