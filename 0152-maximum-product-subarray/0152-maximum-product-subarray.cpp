class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curMax = nums[0];
        int curMin = nums[0];
        int maxProd = nums[0];

        for(int i = 1; i < nums.size(); i++)
        {
            int x = nums[i];

            int tempMax = max(x, max(x * curMax, x * curMin));
            int tempMin = min(x, min(x * curMax, x * curMin));

            curMax = tempMax;
            curMin = tempMin;

            if(curMax > maxProd)
                maxProd = curMax;
        }

        return maxProd;
    }
};