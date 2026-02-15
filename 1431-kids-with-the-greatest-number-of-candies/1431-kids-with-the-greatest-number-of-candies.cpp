class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int sum=0;
        int count=0;
        int max=0;
        int n = candies.size();
        for(int i=0;i<n;i++)
        {
            if(candies[i]>max)
            max=candies[i];
        }
        for(int i=0;i<n;i++)
        {
         sum = candies[i]+ extraCandies;
           if(sum>=max)
            result.push_back(true);
            else
            result.push_back(false);
          count=0;
          sum=0;
        } 
        return result;
    }
};