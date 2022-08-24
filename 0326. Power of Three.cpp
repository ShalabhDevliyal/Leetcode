class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0)
            return false;
        float num=log2(n)/log2(3);
        if(pow(3,num)==n)
            return true;
        return false;
    }
};