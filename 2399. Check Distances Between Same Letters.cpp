class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        for(int i=0;i<s.length();i++)
        {
            
            if(s[i]=='.')
                continue;
            int j=i+1+distance[s[i]-97];
            if(j<s.length() && s[j]==s[i]){
                s[i]='.';s[j]='.';}
            else
                return false;
        }
        return true;
    }
};