class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
     sort(nums.begin(),nums.end());
    vector<int>v;
    for(int i=0;i<queries.size();i++)
    {
        int sum=0,l=0;
        for(int j=0;j<nums.size();j++)
        {
            sum+=nums[j];
            if(sum<=queries[i])
                l++;
            else 
                break;
        }
        v.push_back(l);
    }
        return v;
    }
};