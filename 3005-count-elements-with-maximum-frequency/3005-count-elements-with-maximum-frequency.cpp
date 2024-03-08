class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> f(101, 0);
        int ans = 0, mx = 0;
        for(int i = 0; i < nums.size(); ++i) { 
            f[nums[i]]++;
            mx = max(mx, f[nums[i]]);
        }
        for(int i = 0; i < 101; ++i) if(f[i] == mx) ans++;
     return ans*mx;
    }
};