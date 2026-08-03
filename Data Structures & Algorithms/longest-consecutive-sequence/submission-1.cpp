class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numbers;
        if (nums.empty()) {
            return false;
        }
        for (unsigned int i = 0; i < nums.size(); ++i) {
            numbers.insert(nums[i]);
        }
        int longest = 1;
        for (unsigned int i = 0; i < nums.size(); ++i) {
            if (!numbers.contains(nums[i] - 1)) {
                int count = 0; 
                int x = nums[i];
                while (numbers.contains(x)) {
                    ++count;
                    ++x;
                }
                if (count > longest) {
                    longest = count;
                }
            }
        }
        return longest;
    }
};
