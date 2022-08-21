class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int>m;
        for(auto i:nums)
            m[i]++;
        int x;
        for(auto it:m)
        {
            if(it.second==nums.size()/2)
            {
                x=it.first;
                break;
            } 
        }
        return x;
    }
};