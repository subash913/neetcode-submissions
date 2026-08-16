class Solution {
public:
    string num;
    vector<string> combos;

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) {
            return combos;
        }
        num = digits;
        string empty;
        makecombo(empty, 0);
        return combos;
    }

    void makecombo(string& combo, int index) {
        if (index == num.length()) {
            combos.push_back(combo);
            return;
        }
        char c = num[index];
        if (c == '2') {
            combo.push_back('a');
            makecombo(combo, index + 1);
            combo.pop_back();
            combo.push_back('b');
            makecombo(combo, index + 1);
            combo.pop_back();
            combo.push_back('c');
            makecombo(combo, index + 1);
            combo.pop_back();
        } else if (c == '3') {
            combo.push_back('d');
            makecombo(combo, index + 1);
            combo.pop_back();
            combo.push_back('e');
            makecombo(combo, index + 1);
            combo.pop_back();
            combo.push_back('f');
            makecombo(combo, index + 1);
            combo.pop_back();
        } else if (c == '4') {
            combo.push_back('g');
            makecombo(combo, index + 1);
            combo.pop_back();
            combo.push_back('h');
            makecombo(combo, index + 1);
            combo.pop_back();
            combo.push_back('i');
            makecombo(combo, index + 1);
            combo.pop_back();
        } else if (c == '5') {
            combo.push_back('j');
            makecombo(combo, index + 1);
            combo.pop_back();
            combo.push_back('k');
            makecombo(combo, index + 1);
            combo.pop_back();
            combo.push_back('l');
            makecombo(combo, index + 1);
            combo.pop_back();
        } else if (c == '6') {
            combo.push_back('m');
            makecombo(combo, index + 1);
            combo.pop_back();
            combo.push_back('n');
            makecombo(combo, index + 1);
            combo.pop_back();
            combo.push_back('o');
            makecombo(combo, index + 1);
            combo.pop_back();
        } else if (c == '7') {
            combo.push_back('p');
            makecombo(combo, index + 1);
            combo.pop_back();
            combo.push_back('q');
            makecombo(combo, index + 1);
            combo.pop_back();
            combo.push_back('r');
            makecombo(combo, index + 1);
            combo.pop_back();
            combo.push_back('s');
            makecombo(combo, index + 1);
            combo.pop_back();
        } else if (c == '8') {
            combo.push_back('t');
            makecombo(combo, index + 1);
            combo.pop_back();
            combo.push_back('u');
            makecombo(combo, index + 1);
            combo.pop_back();
            combo.push_back('v');
            makecombo(combo, index + 1);
            combo.pop_back();
        } else {
            combo.push_back('w');
            makecombo(combo, index + 1);
            combo.pop_back();
            combo.push_back('x');
            makecombo(combo, index + 1);
            combo.pop_back();
            combo.push_back('y');
            makecombo(combo, index + 1);
            combo.pop_back();
            combo.push_back('z');
            makecombo(combo, index + 1);
            combo.pop_back();
        }
    }
};
