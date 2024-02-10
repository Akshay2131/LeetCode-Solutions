class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        int count = 0;
        for(int i = 0; i < n; ++i) {
            count += countPalin(s, i, i, n);
            count += countPalin(s, i, i + 1, n);
        }
     return count;
    }
    
    int countPalin(string s, int i, int j, int n) {
        int c = 0;
        while(i >= 0 && j < n && s[i] == s[j]) {
            c++;
            i--, j++;
        }
     return c;
    }
};