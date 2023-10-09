class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int low = 0, high = nums.size()-1;
        while(low<=high) {
            int mid = low + (high-low)/2;
            if(nums[mid]==target) {
                if(mid==0 || nums[mid-1]!=target) {
                ans.push_back(mid);
                break;
                }
                high = mid-1;
            }
            else if(nums[mid]<target) low = mid+1;
            else high = mid-1;
        }
        if(ans.empty()) return {-1, -1};
        low = 0, high = nums.size()-1;
        while(low<=high) {
            int mid = low + (high-low)/2;
            if(nums[mid]==target) {
                if(mid==nums.size()-1 || nums[mid+1]!=target) {
                ans.push_back(mid);
                break;
                }
                low = mid+1;
            }
            else if(nums[mid]<target) low = mid+1;
            else high = mid-1;
        }
     return ans;
    }
};