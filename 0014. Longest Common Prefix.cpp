class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        if(strs.size()==1)
            return strs[0];
        sort(strs.begin(),strs.end());
        
        int f=0;
        for(int i=0;i<strs[0].length();i++)
        {
            f=0;
            for(int j=1;j<strs.size();j++)
            {
                if(strs[0][i]!=strs[j][i])
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                return s;
            }
            s+=strs[0][i];
        }
        return s;
    }
};