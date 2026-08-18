class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int t=0;
        for(int r=1;r<nums.size();r++)
        {
            if(nums[t]!=0)
            t++;
            if(nums[r]!=0 && nums[t]==0)
            {
                swap(nums[t],nums[r]);
                t++;
            }
        }
        
    }
};