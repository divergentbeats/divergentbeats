class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0, right=nums.size()-1, mid,t,k;
        vector<int> ans(2);
        while(left<=right)
        {
            mid=(left+right)/2;
            if(target==nums[mid])
            {
                t=mid;
                while(t>0 && nums[t-1]==target)
                t--;
                k=mid;
                while(k<nums.size()-1 && nums[k+1]==target)
                k++;
                ans[0]=t;
                ans[1]=k;
                return ans;
            }
            else if(target < nums[mid])
            right = mid-1;
            else
            left = mid+1;
        }
        ans[0]=-1;
        ans[1]=-1;
        return ans;
    }
};