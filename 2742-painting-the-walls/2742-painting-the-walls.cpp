class Solution {
public:
    
    int solve(vector<int>& cost, vector<int>& time, vector<vector<int>>& memo, int i, int j) {
        if(j <= 0) return 0;
        if(i == cost.size()) return 1e9;
        if(memo[i][j] != -1) return memo[i][j];
        int take = cost[i] + solve(cost, time, memo, i + 1, j - 1 - time[i]);
        int notTake = solve(cost, time, memo, i + 1, j);
     return memo[i][j] = min(take, notTake);
    }
    
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n = cost.size();
        vector<vector<int>> memo(n, vector<int> (n + 1, -1));
     return solve(cost, time, memo, 0, n);
    }
};