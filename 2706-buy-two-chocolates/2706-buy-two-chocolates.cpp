class Solution {
public:
    int buyChoco(vector<int>& p, int money) {
        sort(p.begin(), p.end());
     return money - p[0] - p[1] >= 0 ? money - p[0] - p[1] : money;
    }
};