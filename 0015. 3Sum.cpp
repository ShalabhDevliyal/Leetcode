class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        if(nums.size()<3)
            return v;
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int j=i+1,k=nums.size()-1;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;k--;
                }
                else if(nums[i]+nums[j]+nums[k]<0)
                    j++;
                else
                    k--;
            }
        }
        for(auto it:s)
        {
            v.push_back(it);
        }
        return v;
    }
};