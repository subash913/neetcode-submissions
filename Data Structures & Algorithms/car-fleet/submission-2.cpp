class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        if (position.size() == 1) {
            return 1;
        }
       int fleets = position.size();
       vector<int> stack;
       vector<pair<int,int>> ps;
       for (int i = 0; i < position.size(); ++i) {
        ps.push_back({position[i], speed[i]});
       } 

       sort(ps.begin(), ps.end());
       double time = (target - ps[ps.size()-1].first) / ps[ps.size()-1].second;
       for (int i = ps.size() - 2; i > -1; --i) {
        double currtime = (double) (target - ps[i].first) / ps[i].second;
        if (currtime <= time) {
            fleets--;
        } else {
            time = currtime;
        }
       }

       return fleets;
    }
};
