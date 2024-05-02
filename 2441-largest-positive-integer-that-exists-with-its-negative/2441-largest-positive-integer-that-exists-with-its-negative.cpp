class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int ans = -1;
        unordered_set<int> seen; 
        for (int num : nums) { 
            const int abs_num = abs(num);
            if (abs_num > ans && seen.contains(-num)) 
                ans = abs_num;
            seen.insert(num); 
        }
     return ans; 
    }
};