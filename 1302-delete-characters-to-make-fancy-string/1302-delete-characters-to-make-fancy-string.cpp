class Solution {
public:
    string makeFancyString(string s) {
        if(s.size() < 3) return s;
        string ans = "";
        ans += s[0];
        ans += s[1];
        for(int i = 2; i < s.size(); ++i) {
            if(s[i - 1] == s[i] && s[i - 2] == s[i]) continue;
            ans += s[i];
        }
     return ans;
    }
};