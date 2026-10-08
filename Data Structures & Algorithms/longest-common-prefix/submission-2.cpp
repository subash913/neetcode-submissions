class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for (int i = 0; i < strs.size(); ++i) {
            if (strs[i].size() == 0) {
                return strs[i];
            }
            for (int j = 0; j < strs[i].length() && j < prefix.length(); ++j) {
                if (strs[i][j] != prefix[j]) {
                    prefix = prefix.substr(0, j);
                    break;
                }
            }
            if (prefix.size() > strs[i].size()) {
                prefix = strs[i];
            }
            if (prefix.length() == 0) {
                return prefix;
            }
        }
        return prefix;
    }
};