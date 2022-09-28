class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.length();
        int i=0;
        while(i<n)
        {
            int j=i,x=min(n-1,k-1+i);
            while(j<x)
            {
                swap(s[j],s[x]);
                j++;
                x--;
            }
            i+=2*k;
        }
        return s;
    }
};