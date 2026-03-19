class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left=0,right=nums.size()-1,mid;
        int max=nums[0],pos=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>max)
            {
            max=nums[i];
            pos=i;
            }
        }
       return pos;


        
    }
};