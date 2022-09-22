class Solution {
public:
    string reverseWords(string s) {
    int i=0;
    int j=0;
    while(1)
    {
        if(s[j]==' ' || j==s.length())   
        {
            int k=j-1;
            while(i<k)
            {
                swap(s[i],s[k]);
                i++;
                k--;
            }
            i=j+1;
            j=i+1;
        }
        else
        {
            j++;
        }
        
        if(j>s.length())
            break;
    }
    return s;
    }
};