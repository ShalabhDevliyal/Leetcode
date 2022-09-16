// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
    int i=0;
    int mid;
    int ans=n;
    while(i<=n)
    {
        mid=(i+(n-i)/2);
        if(isBadVersion(mid))
        {
            n=mid-1;
            ans=mid;
        }
        else
        {
            i=mid+1;
        }
        
    }
    return ans;
    }
};