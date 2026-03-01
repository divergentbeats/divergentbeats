class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int val=0, k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
            val=nums[i];
            nums[k]=nums[i];
            k++;
            }
            else if(nums[i]!=val)
            {
                
                nums[k]=nums[i];
                val=nums[i];
                k++;
            } 
        }
        return k;
        
    }
};