class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> count(nums.size() + 1);
        for (int i = 0; i < nums.size(); ++i) {
            count[nums[i]]++;
        }
        vector<int> out(2);
        for (int i = 1; i < count.size(); ++i) {
            if (count[i] == 2) {
                out[0] = i;
            }
            if (count[i] == 0) {
                out[1] = i;
            }
        }
        return out;
    }
};