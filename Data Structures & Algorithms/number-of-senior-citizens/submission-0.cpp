class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0; 
        for (int i = 0; i < details.size(); ++i) {
            int x = stoi(details[i].substr(11,2));
            cout << x << endl;
            if (x > 60) {
                count++;
            }
        }
        return count;
    }
};