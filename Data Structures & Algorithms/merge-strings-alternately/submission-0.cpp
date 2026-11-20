class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string out;
        int i = 0;
        while (i < word1.length() && i < word2.length()) {
            out.push_back(word1[i]);
            out.push_back(word2[i]);
            ++i;
        }
        while (i < word1.length()) {
            out.push_back(word1[i]);
            ++i;
        }
        while (i < word2.length()) {
            out.push_back(word2[i]);
            ++i;
        }
        
        return out;
    }
};