class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int m = s.size(), n = t.size();
        int i = m - 1, j = n - 1;
        while(i >= 0 || j >= 0) {
            int a = 0;
            while(i >= 0 && s[i] == '#') {
                while(i >= 0 && s[i] == '#') a++, i--;
                while(i >= 0 && a > 0 && s[i] != '#') a--, i--;
            }
            a = 0;
            while(j >= 0 && t[j] == '#') {
                while(j >= 0 && t[j] == '#') a++, j--;
                while(j >= 0 && a > 0 && t[j] != '#') a--, j--;
            }
            if(i < 0 || j < 0) break;
            if(s[i] == t[j]) i--, j--;
            else return false;
        }
     return i < 0 && j < 0;
    }
};