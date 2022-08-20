class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int i=0,j=1;
        int cnt=0;
        if(s.length()<2)
            return 0;
       while(1)
       {
           j=1;
           i=0;
           int c=0;
           // cout<<s<<endl;
            while(j<s.length())
            {
                if(s[i]=='0' && s[j]=='1')
                {
                    s[i]='1';
                    s[j]='0';
                    c=1; 
                    i=j+1;
                    j=i+1;
                }
                else
                {
                    i++;
                    j++;
                }
            }
           
           if(c==0)
               break;
           else
               cnt++;
            
       }
        return cnt;
    }
};