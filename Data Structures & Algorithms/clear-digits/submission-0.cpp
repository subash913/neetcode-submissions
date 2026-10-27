class Solution {
public:
    string clearDigits(string s) {
        char c = s[0];
        string out(1,c);
        for (int i = 1; i < s.size(); ++i) {
            if (isdigit(s[i])) {
                out.pop_back();
            } else {
                out.push_back(s[i]);
            }
        }
        return out;
    }
};
