class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        // for(auto it:m)
        //     cout<<it.first<<" -> "<<it.second<<endl;
        for(auto it:m)
        {
                for(int i=0;i<s.length();i++)
                {
                    if(m[s[i]]==1)
                        return i;
                }
        }
        return -1;
        
    }
};