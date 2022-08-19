class Solution {
public:
    int max1(string num)
    {
        char mx=num[0];
        for(int i=1;i<num.length();i++)
            mx=max(mx,num[i]);
        return mx;
    }
    bool digitCount(string num) {
        int mx=max1(num);
        vector<int>arr(mx);
        for(int i=0;i<num.length();i++)
        {
            
            arr[num[i]-'0']++;
        }
        for(int i=0;i<num.length();i++)
        {
            if(arr[i]!=num[i]-'0')
            {
                return false;
            }
                
        }
        return true;
    }
};