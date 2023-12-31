class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        int n=nums.size();
        int c1=0, c2=0, num1=0, num2=0;
        for(int i=0; i<n; i++) {
            if(nums[i]==num1)
                    c1++;
            else if(nums[i]==num2)
                    c2++;
            else if(c1==0) {
                num1=nums[i];
                c1=1;
            }
            else if(c2==0) {
                num2=nums[i];
                c2=1;
            }
            else {
                    c1--;
                    c2--;
                }
        }
        int count1=0, count2=0;
        for(int i=0; i<n; i++) {
            if(num1==nums[i])
                count1++;
            else if(num2==nums[i])
                count2++;
        }
        if(count1>floor(n/3))
            res.push_back(num1);
        if(count2>floor(n/3))
            res.push_back(num2);
      return res;
    }
};