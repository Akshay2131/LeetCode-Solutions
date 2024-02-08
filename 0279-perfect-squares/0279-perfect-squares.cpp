class Solution {
public:
    int numSquares(int n) {
        int ans = 0;
        queue<int> q;
        q.push(n);
        while(!q.empty()) {
            int size = q.size();
            for(int i = 0; i < size; ++i) {
                int curr = q.front();
                q.pop();
                int sq = sqrt(curr);
                if(sq * sq == curr) return ans + 1;
                for(int j = sq; j > 0; --j) q.push(curr - j * j);
            }
            ans++;
        }
     return ans; 
    }
};