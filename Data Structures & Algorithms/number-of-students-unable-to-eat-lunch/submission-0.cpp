class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        vector<int> sandwichstack;
        for (int i = students.size() - 1; i > -1; --i) {
            sandwichstack.push_back(sandwiches[i]);
        }
        int count = 0;
        int circle = 0;
        int square = 0;
        queue<int> back;
        for (int i = 0; i < students.size(); ++i) {
            if (students[i] == sandwichstack.back()) {
                sandwichstack.pop_back();
                ++count;
            } else {
                if (students[i] == 0) {
                    circle++;
                } else {
                    square++;
                }
                back.push(students[i]);
            }
        }
        while(!sandwichstack.empty()) {
            if (sandwichstack.back() == back.front()) {
                sandwichstack.pop_back();
                ++count;
                if (back.front() == 0) {
                    circle--;
                } else {
                    square--;
                }
                back.pop();

            } else {
                if (sandwichstack.back() == 0) {
                    if (circle == 0) {
                        return students.size() - count;
                    }
                } else {
                    if (square == 0) {
                        return students.size() - count;
                    }
                }
                back.push(back.front());
                back.pop();
            }
        }

        return students.size() - count;

    }
};