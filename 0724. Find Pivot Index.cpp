class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int p=-1;
        int sumr=0,suml=0;
        
        for(auto it:nums)
            sumr+=it;
       
        for(int i=0;i<nums.size();i++)
        {
            sumr-=nums[i];
            if(i>0)
                suml+=nums[i-1];
            // cout<<suml<<"\t"<<sumr<<endl;
            if(suml==sumr)
            {
                p=i;
                break;
            }
        }
        return p;
        
    }
};