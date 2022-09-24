class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=-1;
        int pr;
        int sum=0;
        for(int i=1;i<prices.size();i++)
        {
            if(buy==-1)
                buy=prices[i-1];
            if(buy>prices[i]){
                buy=prices[i];
                continue;
            }
            else{
            while(i<prices.size() && i+1<prices.size() && prices[i]<=prices[i+1])
            {
               i++;
            }
           
            cout<<buy<<" -> "<<prices[i]<<endl;
            sum+=prices[i]-buy;
            buy=-1;
            }
        }
        return sum;
       
    }
};