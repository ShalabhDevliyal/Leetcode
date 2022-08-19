class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;
        for(auto i:nums)
        {
            m[i]++;
        }
        
        vector<pair<int,int>>v;
        for(auto it:m)
        {
            v.push_back({it.second,it.first});
        }
        sort(v.rbegin(),v.rend());

        
        vector<int>v1;
        int i=0;
        while(k--)
        {
            v1.push_back(v[i++].second);
        }

        return v1;  
        
    }
};