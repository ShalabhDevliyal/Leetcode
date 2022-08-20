class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        
       int ans =  0;
        for(auto i:blocks)
        {
            if(i=='W')
                ans++;
        }
        
        int n = blocks.size();
        for(int i = 0; i<=n-k; ++i)
        {
            int count = 0;
            int j=i;
            while(j<k+i)
            {
                if(blocks[j++] == 'W')
                    ++count;
            }
            ans = min(ans,count);
        }
        return ans;
    }
};