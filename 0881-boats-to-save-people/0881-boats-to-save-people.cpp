class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int n=people.size();
        int low=0, high=n-1, count=0; 
        while(low<=high) {
            if(people[low]+people[high]<=limit) {
                low++;
                high--;
            }
            else
                high--;
            count++;
        }
     return count;
    }
};