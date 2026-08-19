class Solution {
public:
    string word;
    vector<vector<string>> combos;

    vector<vector<string>> partition(string s) {
        word = s;
        vector<string> empty;
        string emptystring;
        split(empty, emptystring, 0);
        return combos;

    }

    void split(vector<string>& palindromes, string& curr, int index) {
        if (index == word.length()) {
            if (isPalindrome(curr)) {
                palindromes.push_back(curr);
                combos.push_back(palindromes);
                palindromes.pop_back();
            }
            return;
        }
        curr += word[index];
        split(palindromes, curr, index + 1);
        curr.pop_back();
        if (isPalindrome(curr)) {
            palindromes.push_back(curr);
            string temp;
            temp += word[index];
            split(palindromes, temp, index + 1);
            palindromes.pop_back();

        }
    }

    bool isPalindrome(const string& word) {
        if (word.empty()) {
            return false;
        }
        int i = 0;
        int j = word.length() - 1;
        while (i < j) {
            if (word[j] != word[i]) {
                return false;
            }
            ++i;
            --j;
        }
        return true;
    }
};
