class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;
        for (unsigned int i = 0; i < s.length(); ++i) {
            if (map1.contains(s[i])) {
                map1[s[i]]++;
            } else {
                map1[s[i]] = 1;
            }
        }
        for (unsigned int j = 0; j < t.length(); ++j) {
            if (map2.contains(t[j])) {
                map2[t[j]]++;
            } else {
                map2[t[j]] = 1;
            }
        }
        return map1 == map2;
    }
};
