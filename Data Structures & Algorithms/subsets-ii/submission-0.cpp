class Solution {
public:

    vector<int> integers;
    vector<vector<int>> subsets;

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        integers = nums;
        sort(integers.begin(), integers.end());
        vector<int> empty;
        unordered_set<int> used;
        makesubsets(0, empty, used);
        return subsets;
    }

    void makesubsets(int index, vector<int>& curr, unordered_set<int>& used) {
        if (index == integers.size()) {
            subsets.push_back(curr);
            return;
        }
        if (!used.contains(integers[index])) {
            makesubsets(index + 1, curr, used);
        }
        curr.push_back(integers[index]);
        used.insert(integers[index]);
        makesubsets(index + 1, curr, used);
        curr.pop_back();
        used.erase(integers[index]);
    }
};
