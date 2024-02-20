class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x=nums[0], y=0, i=0;
        for(i=1; i<nums.size(); i++) {
            x+=nums[i];
        }
        y=(nums.size()*(nums.size()+1))/2;
     return y-x;
    }
};