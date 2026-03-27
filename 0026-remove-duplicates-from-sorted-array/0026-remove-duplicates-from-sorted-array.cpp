class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0,val;
        for(int i=0;i<nums.size();i++)
        {
           if(i==0)
           {
           nums[k]=nums[i];
           val=nums[i];
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