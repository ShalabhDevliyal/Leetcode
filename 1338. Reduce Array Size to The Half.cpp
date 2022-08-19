class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        priority_queue<int>pq;
        
        int original_size=arr.size();
        int new_Size=original_size;
        int cnt=0;
        
        for (auto i : m) 
            pq.push(i.second);
        
        while(!pq.empty())
        {
            new_Size-=pq.top();
            pq.pop();
            
            cnt++;
            if(new_Size<=original_size/2)
                break;
        }
        
        return cnt;
    }
    
    
};