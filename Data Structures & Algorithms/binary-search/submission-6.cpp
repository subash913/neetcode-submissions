class Solution {
public:
    int search(vector<int>& nums, int target) {
       int i = 0;
       int j = nums.size() - 1;
       int index = -1;
       while (i <= j) {
        int x = nums[(i + j) / 2];
        if (x == target) {
            index = (i+j)/2;
            return index;
        }
        if (x < target) {
            i = ((i + j) / 2) + 1;
        } else {
            j = ((i + j) / 2) - 1;
        }
       }

       return -1;
    }
    
};
