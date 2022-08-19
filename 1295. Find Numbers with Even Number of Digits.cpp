class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        int x;
        int dig=0;
        for(int i=0;i<nums.size();i++)
        {
            dig=1;
            x=nums[i];
            while(x)
            {
                cout<<x<<"->"<<dig<<"   ";
            
                dig++;
                x/=10;
            }
            
            cout<<endl;
            
            if(dig%2)
                cnt++;
        }
        return cnt;
    }
};