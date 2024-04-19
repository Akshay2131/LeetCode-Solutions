class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        for(int i=0; i<grid.size(); ++i) {
            for(int j=0; j<grid[0].size(); ++j) {
                if(grid[i][j]=='1') {
                    ans++;
                    bfs(grid, i, j);
                }
            }
        }
     return ans;
    }
    
    void bfs(vector<vector<char>>& grid, int i, int j) {
        int m = grid.size(), n = grid[0].size();
        queue<pair<int, int>> q;
        grid[i][j] = '2';
        q.push({i,j});
        vector<int> v {-1, 0, 1, 0, -1};
        while(!q.empty()) {
            int sz = q.size();
            for(int i=0; i<sz; ++i) {
                auto [x, y] = q.front();
                q.pop();
                for(int k=0; k<4; ++k) {
                    int a = x + v[k];
                    int b = y + v[k+1];
                    if(a>=0 && b>=0 && a<m && b<n && grid[a][b]=='1') {
                        q.push({a,b});
                        grid[a][b] = '2';
                    }
                }
            }
        }
     return;
    }
};