class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for (int i = s.length() - 1; i > -1; --i) {
            if (s[i] == ' ') {
                if (count != 0) {
                    return count;
                }
                continue;   
            }
            count++;
        }
        return count;
    }
};