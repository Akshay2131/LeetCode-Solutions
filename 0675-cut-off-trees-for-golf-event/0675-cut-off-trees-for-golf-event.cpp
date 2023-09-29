class Solution {
public:
    vector<int> d = {-1, 0, 1, 0, -1};
    int cutOffTree(vector<vector<int>>& forest) {
        int m = forest.size(), n = forest[0].size();
        priority_queue<int , vector<int>, greater<int>> pq;
        for(auto row : forest) {
            for(auto tree : row) {
                if(tree > 1) pq.push(tree);
            } 
        } 
        if(pq.empty()) return 0;
        vector<vector<int>> vis(m, vector<int> (n, -1));
        queue<pair<int, int>> q;
        q.push({0,0});
        int ans = 0;
        int curr = 0;
        while(!q.empty()) {
            int size = q.size();
            for(int k = 0; k < size; ++k) {
                bool f = false;
                auto [x, y] = q.front();
                q.pop();
                vis[x][y] = curr;
                if(forest[x][y] == pq.top()) {
                    pq.pop();
                    curr++;
                    vis[x][y] = curr;
                    if(pq.empty()) return ans;
                    while(!q.empty()) {
                        f = true;
                        q.pop();
                    }
                }
                for(int i = 0; i < 4; ++i) {
                    int a = x + d[i], b = y + d[i + 1];
                    if(a >= 0 && b >= 0 && a < m && b < n && forest[a][b] != 0) {
                        if(vis[a][b] != curr) {
                            q.push({a, b});
                            vis[a][b] = curr;
                        }
                    }
                }
                if(f) break;
            }
            ans++;
        }
     return -1;
    }
};