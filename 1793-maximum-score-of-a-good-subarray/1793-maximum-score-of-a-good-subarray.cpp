class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int ans = nums[k], n = nums.size();
        int i = k - 1, j = k + 1, curr = nums[k];
        while(i >= 0 || j < n) {
            int l = 0, r = 0;
            if(i >= 0) l = nums[i];
            if(j < n) r = nums[j];
            int mn = max(l, r);
            curr = min(curr, mn);
            (mn == l) ? i-- : j++;
            ans = max(ans, (j - i - 1) * (curr));
            cout<<ans<<" ";
        }
     return ans;
    }
};