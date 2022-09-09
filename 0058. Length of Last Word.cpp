class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int cnt=0,i=0,f=0;
        while(i<s.length())
        {
            if(f==0 && s[i]==' ')
            {
                i++;
                continue;
            }
            else{
                if(s[i]==' ')
                    break;
                cnt++;
                i++;
                f=1;
            }
        }
        return cnt;
    }
};