class Solution {
public:
    vector<vector<int>> generate(int k) {
        vector<vector<int>> ans(k);
        for(int i = 0; i < k; ++i) {
            ans[i].push_back(1);
            for(int j = 0; j < i; ++j) {
                if(j == (i - 1)) ans[i].push_back(1);
                else ans[i].push_back(ans[i - 1][j] + ans[i - 1][j + 1]);
            }
        }
     return ans;
    }
};