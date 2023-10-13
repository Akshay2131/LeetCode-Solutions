class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> ans(2);
        ans[0] = cost[0], ans[1] = cost[1];
        for(int i = 2; i < cost.size(); ++i) {
            ans[i % 2] = cost[i] + min(ans[i % 2], ans[(i + 1) % 2]);
        }
     return min(ans[0], ans[1]);
    }
};