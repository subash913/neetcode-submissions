class Solution {
public:

    vector<int> integers;
    vector<vector<int>> perms;

    vector<vector<int>> permute(vector<int>& nums) {
       integers = nums;
       vector<int> empty;
       unordered_set<int> emptyset;
       makeperm(empty, emptyset);
       return perms;
    }

    void makeperm(vector<int>& perm, unordered_set<int>& used) {
        if (perm.size() == integers.size()) {
            perms.push_back(perm);
            return;
        }
        for (int i = 0; i < integers.size(); ++i) {
            if (used.contains(integers[i])) {
                continue;
            }
            perm.push_back(integers[i]);
            used.insert(integers[i]);
            makeperm(perm, used);
            perm.pop_back();
            used.erase(integers[i]);
            
        }
        return;


    }
};
