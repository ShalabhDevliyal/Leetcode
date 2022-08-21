class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        char prev;
        int i=-1;
        while(++i<s.length())
        {
            // cout<<i<<' '<<s[i]<<"\n";
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                st.push(s[i]);
            }
         
            else if(!st.empty()&&((s[i]==')'&&st.top()=='(')||(s[i]=='}'&&st.top()=='{')||(s[i]==']'&&st.top()=='[')))              {
                // cout<<st.top()<<"\n";
                st.pop();
            }
            else 
                return false;
        }
        if(st.empty())
            return true;
        return false;
    }
};