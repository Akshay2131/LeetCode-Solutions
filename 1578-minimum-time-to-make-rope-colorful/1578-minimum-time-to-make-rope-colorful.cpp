class Solution {
public:
    int minCost(string c, vector<int>& neededTime) {
        long long ans = 0;
        for(int i = 1; i < c.size(); ++i) {
            int j = i - 1;
            while(i < c.size() && c[i] == c[j]) {
                ans += min(neededTime[i], neededTime[j]);
                if(neededTime[i] > neededTime[j]) j = i;
                i++;
            }
        }
     return ans;
    }
};