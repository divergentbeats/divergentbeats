class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=prices[0], maxprofit=0;
        for(int i=1;i<prices.size();i++)
        {
            int profit=prices[i]-minp;
            if(prices[i]<minp)
            minp=prices[i];
            if(profit>maxprofit)
            maxprofit=profit;
        }
        return maxprofit;
    }
};