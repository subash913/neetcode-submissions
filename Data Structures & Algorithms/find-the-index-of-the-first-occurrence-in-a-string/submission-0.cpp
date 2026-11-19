class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t i = haystack.find(needle);
        if (i != string::npos) {
            return i;
        }
        return -1;
    }
};