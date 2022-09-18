class Solution {
public:
    int longestContinuousSubstring(string s) {
        int mx=INT_MIN;
        int cnt=1;
        if(s.length()==1)
            return 1;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1]+1)
                cnt++;
            else
            {
                mx=max(mx,cnt);
                cnt=1;
            }
        }
        mx=max(mx,cnt);
        return mx;
    }
};