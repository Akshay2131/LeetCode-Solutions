class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m = mat.size(), n = mat[0].size();
        priority_queue<pair<int, int>> pq;
        for(int i = 0; i < m; ++i) {
            int j = 0;
            for(; j < n; ++j) {
                if(mat[i][j] == 0) break;
            }
            if(pq.size() == k) {
                if(pq.top().first > j) {
                    pq.pop();
                    pq.push({j, i});
                }
            }
            else pq.push({j, i});
        }
        vector<int> ans(k);
        int i = k - 1;
        while(!pq.empty()) {
            ans[i--] = pq.top().second;
            pq.pop();
        }
     return ans;
    }
};