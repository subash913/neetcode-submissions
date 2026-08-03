class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size(),1);
        vector<int> suffix(nums.size(),1);
        vector<int> products(nums.size(),1);
        prefix[0] = 1;
        suffix[nums.size() - 1] = 1;
        for (int i = 1; i < nums.size(); ++i) {
            prefix[i] = nums[i-1] * prefix[i-1];
        }
        for (int i = nums.size() - 2; i > -1; --i) {
            suffix[i] = nums[i+1] * suffix[i+1];
            
        }
        for (int i = 0; i < nums.size(); ++i) {
            products[i] = suffix[i]*prefix[i];
        }
        return products;

    }
};
