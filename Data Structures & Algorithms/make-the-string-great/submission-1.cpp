class Solution {
public:
    string makeGood(string s) {
        char c = s[0];
        string out(1,c);
        for (int i = 1; i < s.size(); ++i) {
            if (toupper(out[out.size() - 1]) == toupper(s[i]) && out[out.size() - 1] != s[i]) {
                out.pop_back();
            } else {
                out.push_back(s[i]);
            }
        }
        return out;
    }
};
