class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st(nums2.begin(), nums2.end());
        int ans = INT_MAX;
        for(auto num: nums1) {
            if(st.count(num) && num < ans) ans = num;
        }
     return ans == INT_MAX ? -1 : ans;
    }
};