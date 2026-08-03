class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s2.length() < s1.length()) {
            return false;
        }
        int i = 0;
        int j = s1.length();
        vector<int> x (26,0);
        vector<int> y (26,0);
        for (unsigned int k = 0; k < s1.length(); ++k) {
            x[s1[k] - 'a']++;
            y[s2[k] - 'a']++;
        }
        while (j < s2.length()) {
            if (x == y) {
                return true;
            }
            y[s2[i] - 'a']--;
            i++;
            y[s2[j] - 'a']++;
            j++;
        }
        return x == y;
    }
};
