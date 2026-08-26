class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
       vector<int> newarray;
       for (int i = 0; i < nums.size(); ++i) {
        newarray.push_back(nums[i]);
       }
       for (int i = 0; i < nums.size(); ++i) {
        newarray.push_back(nums[i]);
       }
       return newarray;

    }
};