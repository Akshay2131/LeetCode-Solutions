class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size(), n=text2.size();
        vector<vector<int>> dp(2, vector<int> (n+1, 0));
        for(int i=0; i<m; ++i) {
            for(int j=0; j<n; ++j) {
        dp[(i+1)%2][j+1]=(text1[i]==text2[j]) ? dp[i%2][j]+1: max(dp[(i+1)%2][j], dp[i%2][j+1]);
            }
        }
     return dp[m%2][n];
    }
};