class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0, right=nums.size()-1, mid=0, i, j;
        vector<int> ans(2);
        while(left<=right)
        {
            mid = (left+right)/2;
            if(target == nums[mid])
            {
                i = mid, j=mid;
                while(i > 0 && nums[i-1]==target)
                i--;
                while(j<nums.size()-1 && nums[j+1]==target)
                j++;
                ans[0]=i;
                ans[1]=j;
                return ans;
            }
            if(target < nums[mid])
            right = mid-1;
            else
            left = mid+1;
            
        }
        ans[0] =-1;
        ans[1]=-1;
        return ans;
    }
};