class Solution {
public:
    int countHomogenous(string s) {
        int mod = 1e9+7;
        int count = 1, curr = 1;
        for(int i=1; i<s.size(); i++) {
            if(s[i]==s[i-1]) {
                curr++;
            }
            else 
                curr = 1;
            count = (count + curr) % mod;
        }
     return count % mod;
    }
};