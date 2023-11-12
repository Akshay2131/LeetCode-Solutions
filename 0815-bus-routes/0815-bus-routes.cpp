class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        if(source == target) return 0;
        unordered_map<int, vector<int>> mp;
        for(int i = 0; i < routes.size(); ++i) {
            for(auto s : routes[i]) {
                mp[s].push_back(i);
            }
        }
        queue<int> q;
        int ans = 1;
        unordered_set<int> vis;
        for(auto r : mp[source]) {
            q.push(r);
            vis.insert(r);
        }
        while(!q.empty()) {
            int n = q.size();
            for(int i = 0; i < n; ++i) {
                int curr = q.front();
                q.pop();
                for(auto s : routes[curr]) {
                    if(s == target) return ans;
                    for(auto r : mp[s]) {
                        if(!vis.count(r)) {
                            vis.insert(r);
                            q.push(r);
                        }
                    }
                }
            }
            ans++;
        }
     return -1;
    }
};