class Solution {
public:
    bool isPowerOfFour(int n) {
     
        if(n==0)
            return false;
        float num= log2(n);
        float power=num/2.0;
        if(ceil(power)==floor(power))
            return true;
        return false;
    }
};