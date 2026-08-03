class Solution {
public:

    string encode(vector<string>& strs) {
        string x = "";
        for (unsigned int i = 0; i < strs.size(); ++i) {
            x += to_string(strs[i].length());
            x += '#';
            x += strs[i];
        }
        return x;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> strs;
        while (i < s.length()) {
            string z = "";
            while (s[i] != '#') {
                z += s[i];
                i++;
            }
            i++;
            int x = stoi(z);
            int j = i + x;
            string y = "";
            while (i < j && i < s.length()) {
                y += s[i];
                i++;
            }
            strs.push_back(y);
        }
        return strs;
    }
};
