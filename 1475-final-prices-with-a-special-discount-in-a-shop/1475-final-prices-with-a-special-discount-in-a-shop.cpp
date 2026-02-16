class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> answers;
        for(int i=0;i<prices.size();i++)
        {
            for(int j=i;j<prices.size();j++)
            {
                if(j>i && prices[j]<=prices[i])
                {
                    prices[i]=prices[i]-prices[j];
                    answers.push_back(prices[i]);
                    break;
                }
                else if(j==(prices.size()-1))
                answers.push_back(prices[i]);
            }

        }
        return answers;
        
    }
};