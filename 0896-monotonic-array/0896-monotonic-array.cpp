class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i = 0, n = nums.size();
        bool in = false, d = false;
        while(i < n - 1) {
            if(nums[i] < nums[i + 1]) in = true;
            else if(nums[i] > nums[i + 1]) d = true;
            i++;
        }
        if(in && d) return false;
     return true;
    }
};