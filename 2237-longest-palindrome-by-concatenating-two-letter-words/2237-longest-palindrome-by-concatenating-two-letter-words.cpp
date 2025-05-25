class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int ans = 0, count = 0;
        unordered_map<string, int> mp;
        for(string s : words) {
            string rev = s;
            swap(rev[0], rev[1]);
            if(mp.count(rev)) {
                ans += 4;
                mp[rev]--;
                if(mp[rev] == 0) mp.erase(rev);
                if(s[0] == s[1]) count -= 2;
            }
            else {
                if(s[0] == s[1]) count += 2;
                mp[s]++;
            }
        }
     return count > 0 ? ans + 2 : ans;
    }
};