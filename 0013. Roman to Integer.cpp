class Solution {
public:
    int romanToInt(string s) {
        map<string,int>m={{"I",1},{"IV",4},{"V",5},{"IX",9},{"X",10},{"XL",40},{"L",50},{"XC",90},{"C",100},{"CD",400},{"D",500},{"CM",900},{"M",1000}};
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            if(i<s.length()-1 && (s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X'))||(s[i]=='X' && (s[i+1]=='L' || s[i+1]=='C'))||(s[i]=='C' && (s[i+1]=='D' || s[i+1]=='M')))
            {
                string x="";
                x+=s[i];
                x+=s[i+1];
                sum+=m[x];
                i++;
            }
            else
            {
                string x="";
                x+=s[i];
                sum+=m[x];
            }
                
        }
        return sum;
        
    }
};