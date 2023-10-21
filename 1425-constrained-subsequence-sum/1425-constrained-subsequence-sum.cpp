class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> pq;
        pq.push({nums[0], 0});
        int ans = nums[0];
        for(int i = 1; i < nums.size(); ++i) {
            while(i - pq.top().second > k) pq.pop();
            int temp = nums[i] + max(pq.top().first, 0);
            ans = max(ans, temp);
            pq.push({temp, i});
        }
     return ans;
    }
};