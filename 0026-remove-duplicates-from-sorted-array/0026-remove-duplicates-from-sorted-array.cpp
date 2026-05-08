class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int val=0, index=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                val = nums[i];
                index++;
            }
            else if(nums[i]!=val)
            {
                nums[index]=nums[i];
                index++;
                val=nums[i];
            }

        }
        return index;
        
    }
};