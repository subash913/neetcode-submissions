class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m;
        for (unsigned int i = 0; i < magazine.length(); ++i) {
            m[magazine[i]]++;
        }
        for (unsigned int i = 0; i < ransomNote.size(); ++i) {
            if (m[ransomNote[i]] == 0) {
                return false;
            }
            m[ransomNote[i]]--;
        }
        return true;
    }
};