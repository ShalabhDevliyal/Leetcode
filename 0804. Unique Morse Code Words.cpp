class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        map<char,string>m={{'a',".-"},{'b',"-..."},{'c',"-.-."},{'d',"-.."},{'e',"."},{'f',"..-."},{'g',"--."},{'h',"...."},{'i',".."},{'j',".---"},{'k',"-.-"},{'l',".-.."},{'m',"--"},{'n',"-."},{'o',"---"},{'p',".--."},{'q',"--.-"},{'r',".-."},{'s',"..."},{'t',"-"},{'u',"..-"},{'v',"...-"},{'w',".--"},{'x',"-..-"},{'y',"-.--"},{'z',"--.."}};
        
        set<string>st;
        for(auto i:words)
        {
            string s="";
            for(int j=0;j<i.length();j++)
            {
                s+=m[i[j]];
            }
            st.insert(s);
        }
        
        for(auto it:st)
        {
            cout<<it<<' ';
        }
        return st.size();
                           
    }
};