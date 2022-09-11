class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int ans=-1;
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int mx=INT_MIN;
        for(auto it:m)
        {
            if(it.first%2==0 && it.second>mx)
            {
                mx=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};