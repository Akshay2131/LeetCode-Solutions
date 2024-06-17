class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long long int a=0; a*a<=c; a++) {
            long long int b=c-a*a;
            if(isSquare(b))
                return true;
        }
     return false;
    }
    
    bool isSquare(int b) {
        int low=0, high=b;
        while(low<=high) {
            long long int mid=low+(high-low)/2;
            if(mid*mid==b)
                return true;
            else if(mid*mid>b)
                high=mid-1;
            else
                low=mid+1;
        }
     return false;
    }
};