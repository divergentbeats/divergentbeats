class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0, right=nums.size()-1;
        while(left<right)
        {
            int mid=(left+right)/2;
            if(nums[mid]>nums[right]) //Move right
                left=mid+1;
            else if(nums[mid]<=nums[right])    //Fix
                 right=mid;    
        }
        return nums[left];
    }
};