class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int max = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') {
                count++;
            } else if (s[i] == ')') {
                if (count > max) {
                    max = count;
                }
                count--;
            }
        }
        return max;
    }
};