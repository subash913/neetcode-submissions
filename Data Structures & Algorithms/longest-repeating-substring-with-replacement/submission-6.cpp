class Solution {
public:
    int characterReplacement(string s, int k) {
       if (k >= s.length()) {
        return s.length();
       } 
       vector<int> c (26,0);

       int i = 0;
       int j = 0;
       int x = 0;
       while (j < k) {
        c[s[j] - 'A']++;
        j++;
       }
        
        int max = *max_element(c.begin(), c.end());
        while (j < s.length()) {
            if (j - i - max < k + 1) {
                c[s[j] - 'A']++;
                j++;
            } else {
                if (j - i  - 1 > x) {
                    x = j - i - 1; 
                }
                c[s[i] - 'A']--;
                i++;
            }
            max = *max_element(c.begin(), c.end());

        }
        if (j - i > x && j - i - max < k + 1) {
            x = j - i; 
        }
        if (j - i - 1 > x) {
            x = j - i - 1;
        }
        return x;
    }
};
