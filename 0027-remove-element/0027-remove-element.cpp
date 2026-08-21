class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int t=0,count=0;
        for(int r=0;r<nums.size();r++)
        {
            if(nums[t]!=val)
            {
            t++;
            count++;
            }
            else if(nums[t]==val && nums[r]!=val)
            {
            swap(nums[t],nums[r]);
            t++;
            count++;
            }
        }
        return count;
    }
};