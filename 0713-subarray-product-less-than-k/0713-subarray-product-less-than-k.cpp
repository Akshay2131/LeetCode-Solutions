class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;

    int totalCount = 0;
    int product = 1;
        for (int left = 0, right = 0; right < nums.size(); right++) {
      product *= nums[right];
      while (product >= k) {
        product /= nums[left++];
      }
      totalCount += right - left + 1;  
    }

    return totalCount;
    }
};