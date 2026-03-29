class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curmax=nums[0];
        int curmin=nums[0];
        int maxproduct=nums[0];

        for(int i=1;i<nums.size();i++)
        {
            int x=nums[i];
            int tempmax=max(x, max(x*curmin,x*curmax));
            int tempmin=min(x, min(x*curmin,x*curmax));
            curmax=tempmax;
            curmin=tempmin;
            if(curmax>maxproduct)
            maxproduct=curmax;
        }
        return maxproduct;
        
    }
};