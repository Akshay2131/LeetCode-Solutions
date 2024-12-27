class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int prev=0, ans=0;
        for(int i=1; i<values.size(); ++i) {
            prev=max(prev, values[i-1]+i-1);
            ans=max(ans, prev+values[i]-i);
        }
     return ans;
    }
};