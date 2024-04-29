class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        for(int i = 0; i < 32; ++i) {
            int b = (1 << i) & k;
            int c = 0;
            for(int num: nums) {
                c ^= ((1 << i) & num);
            }
            if(c != b) ans++; 
        }
     return ans;
    }
};