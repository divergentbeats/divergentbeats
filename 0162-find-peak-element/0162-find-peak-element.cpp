class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left=0,high=nums.size()-1,mid;
        while(left<high)
        {
            mid=(left+high)/2;
            if(nums[mid]<nums[mid+1])
            left=mid+1;
            else
            high=mid;
        }
        return left;
     
    }
};