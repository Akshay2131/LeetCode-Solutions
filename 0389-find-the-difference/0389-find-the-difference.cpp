class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> f(26, 0);
        for(char ch : s) f[ch - 'a']++;
        for(char ch : t) {
            if(f[ch - 'a'] == 0) return ch;
            f[ch - 'a']--;
        }
     return -1;
    }
};