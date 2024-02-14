class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n=nums.size(), pos=0, neg=1;
        vector<int> x(n);
        
        for(int i=0; i<n; i++) { 
            
                if(nums[i]>0) {
                    x[pos]=nums[i];
                    pos+=2;
                }
                else {
                    x[neg]=nums[i];
                    neg+=2;
                }
        }
       
    return x;
    }
};