class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n<3) return 0;
        int ans=0, left=0, right=n-1;
        int left_max=0, right_max=0;
        while(left<right) {
            left_max=max(height[left], left_max);
            right_max=max(height[right], right_max);
            if(height[left]>=height[right]) {
                ans+=min(left_max, right_max)-height[right];
                right--;
            }
            else {
                ans+=min(left_max, right_max)-height[left];
                left++;
            }
        }
     return ans;
    }
};