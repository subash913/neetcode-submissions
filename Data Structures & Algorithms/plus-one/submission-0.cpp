class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        while (i > -1 && digits[i] == 9) {
            digits[i] = 0;
            i--;
        }
        if (i < 0) {
            vector<int> x(digits.size() + 1);
            x[0] = 1;
            return x;
        }
        digits[i]++;
       
        return digits;
    }
};
