class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long ans = 0;
        for(int i = 0; i < n / 2; ++i) {
            ans = max(ans, (long long) nums[i] + nums[n - i - 1]);
        }
     return ans;
    }
};