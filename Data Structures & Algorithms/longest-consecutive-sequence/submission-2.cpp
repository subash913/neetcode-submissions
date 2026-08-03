class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numbers;
        if (nums.empty()) {
            return 0;
        }
        for (unsigned int i = 0; i < nums.size(); ++i) {
            numbers.insert(nums[i]);
        }
        int longest = 1;
        for (int n: numbers) {
            if (!numbers.contains(n - 1)) {
                int count = 0; 
                int x = n;
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
