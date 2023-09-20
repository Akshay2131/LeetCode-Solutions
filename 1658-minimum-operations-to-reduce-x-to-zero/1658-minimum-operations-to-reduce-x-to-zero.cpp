class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        long long sum = 0;
        for(int num : nums) sum += num;
        int len = -1;
        sum -= x;
        if(sum < 0) return -1;
        long long curr = 0;
        int j = 0;
        for(int i = 0; i < nums.size(); ++i) {
            curr += nums[i];
            while(curr > sum) {
                curr -= nums[j++];
            }
            if(curr == sum) len = max(len, i - j + 1);
        }
     return len == -1 ? -1 : nums.size() - len;
    }
};