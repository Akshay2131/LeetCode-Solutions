/**class Solution {
public:
    int mod=1000000007;
    int dp[1001][1001]={};
    int kInversePairs(int n, int k) {
        int dp[1001][1001]={1};
        for(int i=1; i<=n; ++i)
            for(int j=0; j<=k; ++j)
                for(int m=0; m<=min(i-1, j); ++m)
                    dp[i][j]=(dp[i][j]+dp[i-1][j-m]) % mod;
     return dp[n][k];
    }
}; */
int dp[1001][1001] = { 1 };
class Solution {
public:
    int kInversePairs(int n, int k) {
        if (dp[n][k])
            return dp[n][k];
        for (int N = 1; N <= n; ++N)
            for (int K = 0; K <= k; ++K) {
                dp[N][K] = (dp[N - 1][K] + (K > 0 ? dp[N][K - 1] : 0)) % 1000000007;
                if (K >= N)
                    dp[N][K] = (1000000007 + dp[N][K] - dp[N - 1][K - N]) % 1000000007;
            }
        return dp[n][k];
    }
};