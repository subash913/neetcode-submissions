class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> nums;
        unordered_set<int> final;
        
        for (int i = 0; i < nums1.size(); ++i) {
            nums.insert(nums1[i]);
        }

        for (int i = 0; i < nums2.size(); ++i) {
            if (nums.contains(nums2[i])) {
                final.insert(nums2[i]);
            }
        }
        
        vector<int> out(final.begin(), final.end());
        return out;
    }
};