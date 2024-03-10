class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st(nums2.begin(), nums2.end());
        vector<int> ans;
        for(auto num: nums1) {
            if(st.count(num)) {
                ans.push_back(num);
                st.erase(num);
            }
        }
     return ans;
    }
};