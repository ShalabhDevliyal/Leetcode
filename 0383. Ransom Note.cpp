class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<int,int>m1,m2;
        for(int i=0;i<ransomNote.size();i++)
            m1[ransomNote[i]]++;
        for(int i=0;i<magazine.size();i++)
            m2[magazine[i]]++;
        
        for(int i=0;i<ransomNote.size();i++)
        {
            if(m1[ransomNote[i]]>m2[ransomNote[i]])
                return false;
        }
        return true;
    }
};