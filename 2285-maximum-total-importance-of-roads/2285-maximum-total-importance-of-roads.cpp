#define lli long long int
class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<lli> v(n, 0);
        for(int i=0; i<roads.size(); ++i) {
            v[roads[i][0]]++;
            v[roads[i][1]]++;
        }
        sort(v.begin(), v.end());
        lli ans=0;
        for(int i=0; i<n; ++i) {
            ans+=v[i]*(i+1);
        }
     return ans;
    }
};