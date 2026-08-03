class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> groups;
        unordered_map<string, vector<string>> ma;
        for (unsigned int i = 0; i < strs.size(); ++i) {
            vector<int> ch (26,0);
            for (unsigned int j = 0; j < strs[i].length(); ++j) {
                ch[strs[i][j] - 'a']++;
            }
            string key = to_string(ch[0]);
            for (unsigned int i = 1; i < 26; ++i) {
                key += ',' + to_string(ch[i]);
            }
            ma[key].push_back(strs[i]);
        }
        for (const auto& [key, value] : ma) {
            groups.push_back(value);
        }
        return groups;

    }
};
