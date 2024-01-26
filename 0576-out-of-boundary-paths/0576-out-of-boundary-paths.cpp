class Solution {
public:
    vector<vector<vector<int>>> dp;
    int mod=1000000000+7;
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        dp.resize(m+1, vector<vector<int>> (n+1, vector<int> (maxMove+1, -1)));
    return nop(m, n, maxMove, startRow, startColumn);
    }
    
    int nop(int m, int n, int maxMove, int i, int j) {
        if(i<0 || j<0 || i>=m || j>=n) return 1;
        if(maxMove<=0) return 0;
        if(dp[i][j][maxMove]!=-1) return dp[i][j][maxMove];
        long long int curr=0;
        vector<int> dir {-1, 0, 1, 0, -1};
        for(int k=0; k<4; ++k) curr+=nop(m, n, maxMove-1, i+dir[k], j+dir[k+1]);
     return dp[i][j][maxMove]=curr%mod;
    }
};