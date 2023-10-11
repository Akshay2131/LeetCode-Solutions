class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& f, vector<int>& people) {
        vector<int> start;
        vector<int> end;
        for(auto i : f) {
            start.push_back(i[0]);
            end.push_back(i[1]);
        }
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        vector<int> ans;
        for(int p : people) {
            int i = upper_bound(start.begin(), start.end(), p) - start.begin();
            int j = lower_bound(end.begin(), end.end(), p) - end.begin();
            ans.push_back(i - j);
        }
     return ans;
    }
};