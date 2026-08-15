class Solution {
public:
    int num;
    vector<string> combos;
    vector<string> generateParenthesis(int n) {
        num = n;
        string combo;
        makep(combo, 0);
        return combos;

    }

    void makep(string& combo, int forward) {
        if (forward == num) {
            int added = 0;
           while (combo.length() < 2 * num) {
            combo += ")";
            added++;
           }
           combos.push_back(combo);
           while (added > 0) {
            combo.pop_back();
            added--;
           }
            return;
        }
        combo += "(";
        makep(combo, forward + 1);
        combo.pop_back();
        if (forward > combo.length() - forward) {
            combo += ")";
            makep(combo, forward);
            combo.pop_back();
        }
        
        

    }
};
