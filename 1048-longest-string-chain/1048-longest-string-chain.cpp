class Solution {
public:
    
    static bool compare(string &s1, string &s2) {
     return s1.size() < s2.size();
    }
    
    bool isValid(string &s, string &t) {
        bool f = false;
        int sn = s.size(), tn = t.size();
        if((sn + 1) != tn) return false;
        int i = 0, j = 0;
        while(i < sn && j < tn) {
            if(s[i] == t[j]) i++, j++;
            else {
                if(f) return false;
                else {
                    f = true;
                    j++;
                }
            }
        }
     return true;
    }
    
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), compare);
        int n = words.size();
        vector<int> dp(n, 0);
        int ans = 0;
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < i; ++j) {
                if((dp[i] < dp[j] + 1) && isValid(words[j], words[i])) {
                    dp[i] = dp[j] + 1;
                }
            }
            if(dp[i] == 0) dp[i] = 1;
            ans = max(ans, dp[i]);
        }
     return ans;
    }
};