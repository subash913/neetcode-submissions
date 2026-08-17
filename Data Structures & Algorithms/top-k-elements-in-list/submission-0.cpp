class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> buckets(nums.size() + 1);
        unordered_map<int, int> freqs;
        for (int i = 0; i < nums.size(); ++i) {
            freqs[nums[i]]++;
        }
        for (const auto& [key,value]: freqs) {
            buckets[value].push_back(key);
        }
        vector<int> mostfrequent;
        int count = 0;
        for (int i = buckets.size() - 1; i > -1; --i) {
            for (int j = 0; j < buckets[i].size(); ++j) {
                count ++;
                mostfrequent.push_back(buckets[i][j]);
            }
            if (count == k) {
                return mostfrequent;
            }
        }
        return mostfrequent;
    }
};
