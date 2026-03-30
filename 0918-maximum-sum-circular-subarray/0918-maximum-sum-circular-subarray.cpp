class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxsum=nums[0], current=nums[0],minsum=nums[0],totalsum=nums[0],mincurrent=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            totalsum+=nums[i];
            current=max(nums[i],current+nums[i]);
            mincurrent=min(nums[i],mincurrent+nums[i]);
            minsum=min(minsum,mincurrent);
            maxsum=max(maxsum,current);
            if(i==nums.size()-1 && maxsum>0)
            {
                maxsum=max(maxsum,totalsum-minsum);
            }
        }
        return maxsum;
        
    }
};