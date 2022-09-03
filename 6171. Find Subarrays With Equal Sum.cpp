class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        map<int,int>m;
        int i=0,j=1;
        while(j<nums.size())
        {
            m[nums[i]+nums[j]]++;
            i++;
            j++;
        }
        for(auto it:m)
        {
            if(it.second>1)
            {
                return true;
            }
        }
        return false;
        
    }
};