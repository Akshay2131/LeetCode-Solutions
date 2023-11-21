class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        unordered_map<long long, long long> mp;
        long long ans = 0, mod = 1e9 + 7;
        for(auto num : nums) {
            int rev = 0;
            int temp = num;
            while(temp) {
                rev = rev * 10 + temp % 10;
                temp /= 10;
            }
            mp[num - rev]++;
        }
        for(auto it : mp) {
            if(it.second > 1) {
                ans = (ans + (it.second * (it.second - 1)) / 2) % mod;
            }
        }
     return ans;
    }
};