class Solution {
public:
    int minLength(string s) {
        char c = s[0];
        string prev(1,c);
        for (int i = 1; i < s.size(); ++i) {
            if (prev[prev.size() - 1] == 'A' && s[i] == 'B' || prev[prev.size()- 1] == 'C' && s[i] == 'D') {
                prev.pop_back();
            } else {
                prev.push_back(s[i]);
            }
        }
        return prev.size();
    }
};
