class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        if(poured == 0) return 0.0;
        vector<vector<double>> dp;
        dp.push_back({1.0 * poured});
        for(int i = 1; i <= query_row; ++i) {
            vector<double> curr(i + 1, 0.0);
            for(int j = 0; j < i; ++j) {
                if(dp[i - 1][j] <= 1.0) continue;
                curr[j] += (dp[i - 1][j] - 1) / 2.0;
                curr[j + 1] += (dp[i - 1][j] - 1) / 2.0;
            }
            dp.push_back(curr);
        }
     return dp[query_row][query_glass] > 1.0 ? 1.0 : dp[query_row][query_glass];
    }
};