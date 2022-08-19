class Solution {
public:
    int space(string s)
    {
        int c=0;
        int i=0;
        while(s[i]!='\0')
        {
            if(s[i]==' ')
                c++;
            i++;
        }
        return c+1;
        
    }
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<int,int>m;
        
        for(int i=0;i<messages.size();i++)
        {
            m[i]=space(messages[i]);   
        }
        int mx=0;
        string s;
        
        
        map<string,int>m2;
        for(auto it=m.begin();it!=m.end();it++)
        {
            m2[senders[it->first]]+=it->second;
        }
        
        for(auto it=m2.begin();it!=m2.end();it++)
        {
            if(it->second>mx){
                mx=it->second;
                s=it->first;
            }
            else if(it->second==mx)
            {
                s=max(s,it->first);
            }
        }
        return s;
    }
};