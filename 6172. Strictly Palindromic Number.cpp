class Solution {
public:
    
    bool check_pal(string s)
    {
        int i=0,j=s.length()-1;
        while(i<j) {
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    
    }
    bool isStrictlyPalindromic(int n) {
        int start=2;
        int stop=n-2;
        
        while(start<=stop)
        {
            string  s="";
            int m=n;
            
            while(m)
            {
                s+=char(m%start+'0');
                m/=start;
            }
            // cout<<s<<"\n";
            if(check_pal(s)==false)
                return false;
            start++;
        }
        return true;
    }
};