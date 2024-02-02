class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        vector<int> x;
        int num=0;
        for(int i=1; i<9; i++) {
            num=i;
            for(int j=i+1; j<10; j++) {
                num=num*10+j;
                if(num>=low && num<=high)
                    x.push_back(num);
            }
        }
        sort(x.begin(), x.end());
     return x;
    }
};