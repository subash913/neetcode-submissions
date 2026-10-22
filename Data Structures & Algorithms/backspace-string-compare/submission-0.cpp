class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string x;
        string y;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '#') {
                if (!x.empty()) {
                    x.pop_back();
                }
            } else {
                x.push_back(s[i]);
            }
        }
        for (int i = 0; i < t.length(); ++i) {
            if (t[i] == '#') {
                if (!y.empty()) {
                    y.pop_back();
                }
            } else {
                y.push_back(t[i]);
            }
        }
        return x == y;
    }
};
