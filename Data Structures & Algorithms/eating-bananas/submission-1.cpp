class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int min = 1;
        int max = piles[0];
        for (int i = 1; i < piles.size(); ++i) {
            if (piles[i] > max) {
                max = piles[i];
            }
        }
        if (h == piles.size()) {
            return max;
        }
        while (min < max) {
            int x = (min + max) / 2;
            int hours = 0;
            for (int i = 0; i < piles.size(); ++i) {
                hours += ceil(static_cast<double>(piles[i]) / x);
            }
            if (hours <= h) {
                max = x;
            } else {
                min = x + 1;
            }
        }
        return max;

    }
};
