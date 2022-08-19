class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int mx=0;

        for(int i=0;i<nums.size();i++)
        {
            // cout<<i<<' ';
            if(nums[i]==0)
            {
                mx=max(mx,cnt);
                cnt=0;
            }
            else
            {
                cnt++;
            }
            cout<<cnt<<"->"<<mx<<endl;
        }
         mx=max(mx,cnt);
        return mx;
        
    }
};