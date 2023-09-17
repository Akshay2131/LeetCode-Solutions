class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<bool>> dp(n, vector<bool> (1 << n, false));
        queue<vector<int>> q;
        for(int i = 0; i < n; ++i) {
            q.push({i, 1 << i, 0});
            dp[i][1 << i] = true;
        }
        while(!q.empty()) {
            auto curr = q.front();
            q.pop();
            int i = curr[0], mask = curr[1], d = curr[2];
            if(mask == (1 << n) - 1) return d;
            for(auto j : graph[i]) {
                if(!dp[j][mask | (1 << j)]) {
                    q.push({j, mask | (1 << j), d + 1});
                    dp[j][mask | (1 << j)] = true;
                }
            }
        }
     return -1;
    }
};