class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int currMax = arr[0];
        int prevMax = arr[0];
        int count = 0;
        for(int i = 1; i < arr.size(); ++i) {
            currMax = max(currMax, arr[i]);
            if(currMax == prevMax) count++;
            else {
                prevMax = currMax;
                count = 1;
            }
            if(count == k) return currMax;
        }
     return currMax;
    }
};