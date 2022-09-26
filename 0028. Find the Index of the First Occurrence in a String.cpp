class Solution {
public:
    int strStr(string haystack, string needle) {
        int ind=-1;
        int  f=0;
        for(int i=0;i<haystack.size();i++)
        {
            if(haystack[i]!=needle[0])
                continue;
            else
            {
                f=0;
                for(int j=0;j<needle.size();j++)
                {
                    if(haystack[j+i]!=needle[j])
                    {
                        f=1;
                        break;
                    }
                }
                if(f==0){
                    ind=i;
                    break;
                }
            }
        }
        return ind;
    }
};