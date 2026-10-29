class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int total = 0;
        priority_queue<int> max;
        for (int i = 0; i < gifts.size(); ++i) {
            max.push(gifts[i]);
            total += gifts[i];
        }
        for (int i = 0; i < k; ++i) {
            int temp = max.top();
            total -= temp;
            max.pop();
            temp = sqrt(temp);
            total += temp;
            max.push(temp);
        }
        return total;
    }
};