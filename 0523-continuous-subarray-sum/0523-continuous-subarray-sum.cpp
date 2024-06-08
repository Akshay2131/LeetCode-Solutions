class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(nums.size() < 2) return false;
     //   for(int i = 0; i < nums.size(); ++i) nums[i] %= k;
        unordered_map<int, int> mp;
        long long sum = 0;
        for(int i = 0; i < nums.size(); ++i) {
            sum = (sum + nums[i]) % k;
            if(i > 0 && sum == 0) return true;
            if(mp.count(sum) && (i- mp[sum] > 1) ) return true;
            if(!mp.count(sum)) mp[sum] = i;
        }
     return false;
    }
};