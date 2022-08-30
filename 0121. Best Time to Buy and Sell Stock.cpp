class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=INT_MAX;
        int profit=0;
        int cp=0;
        for(int i=0;i<prices.size();i++)
        {
            if(mn>prices[i])
                mn=prices[i];
            cp=prices[i]-mn;
            
             if(profit < cp)
                profit = cp;
        }
        return profit;  
    }
};