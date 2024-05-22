class Solution {
public:
    vector<vector<string>> ans;
    
    void solve(string &s, vector<string>& curr, int start, vector<vector<bool>>& dp) {
        if(start == s.size()) {
            ans.push_back(curr);
            return;
        }
        string st = "";
        for(int i = start; i < s.size(); ++i) {
            st += s[i];
            if(s[i] == s[start] && (i - start <= 2 || dp[start + 1][i - 1])) {
                dp[start][i] = true;
                curr.push_back(st);
                solve(s, curr, i + 1, dp);
                curr.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<bool>> dp(s.size(), vector<bool> (s.size(), false));
        vector<string> curr;
        solve(s, curr, 0, dp);
     return ans;
    }
    
    
};