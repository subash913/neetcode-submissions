class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> freq(26);
        for (int i = 0; i < text.length(); ++i) {
            freq[text[i] - 'a']++;
        }
        int count = 0;
        while (true) {
            if (freq[0] < count + 1 || freq[1] < count + 1 || freq[13] < count + 1 || freq[11] < 2 *(count + 1) || 
            freq[14] < 2*(count + 1)  ) {
                break;
            }
            count++;
        }
        return count;
    }
};