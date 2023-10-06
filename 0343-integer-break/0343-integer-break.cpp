class Solution {
public:
    
    int solve(int n, vector<int>& memo) {
        if(n <= 2) return 1;
        if(memo[n] != -1) return memo[n];
        int temp = 0;
        for(int i = 1; i <= n; ++i) {
           temp = max(temp, i * solve(n - i, memo));
        }
     return memo[n] = temp;
    }
    
    int integerBreak(int n) {
        vector<int> memo(n + 1, -1);
        if(n == 3) return 2;
     return solve(n, memo);
    }
};