class Solution {
public:
    int stairs;
    int combos;

    int climbStairs(int n) {
        int x = 0;
        int y = 1;
        int count;
        for (int i = 1; i <= n; ++i) {
            count = x + y;
            x = y;
            y = count;
        }
        return count;
    }
    
};
