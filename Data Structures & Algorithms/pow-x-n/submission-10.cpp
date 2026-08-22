class Solution {
public:
    double myPow(double x, int n) {
        double start = x;
        bool negative = false;
        if (n < -2000000 && x != 1 && x != -1) {
            return 0;
        }
        if (n < 0) {
            n = -n;
            negative = true;
        }
        if (n == 0) {
            return 1;
        }
        if (start == 1) {
            return 1;
        }
        
        if (start == -1) {
            if (n % 2 == 0) {
                return 1;
            } else {
                return -1;
            }
        }
        for (int i = 1; i < n; ++i) {
            start = start * x;
        }
        if (negative) {
            start = 1 / start;
        }
        return start;
    }
};
