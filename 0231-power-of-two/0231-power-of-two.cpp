class Solution {
public:
    bool isPowerOfTwo(long long int n) {
        if(n==0)
            return false;
        long long int x=n & (n-1);
        if(x!=0)
            return false;
     return true;
    }
};