class Solution {
public:
    bool isValid(string s) {
        vector<char> vect;
        for (unsigned int i = 0; i < s.length(); ++i) {
            char c = s[i];
            if (c == '(' || c == '{' || c == '[') {
                vect.push_back(c);
            }
            if (vect.empty()) {
                return false;
            }
            if (c == ')') {
                if (vect.back() != '(') {
                    return false;
                }
                vect.pop_back();
            }
            if (c == '}') {
                if (vect.back() != '{') {
                    return false;
                }
                vect.pop_back();
            }
            if (c == ']') {
                if (vect.back() != '[') {
                    return false;
                }
                vect.pop_back();
            }
        }
        return vect.empty();
    }
};
