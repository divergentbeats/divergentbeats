class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2);
        int i=0,j=nums.size()-1,mid,k,t;
        while(i<=j)
        {
            mid=(i+j)/2;
            if(nums[mid]==target)
            {
                k=mid;
                while(k >= 0 && nums[k] == target)
                k--;
                ans[0]=k+1;
                t=mid;
                while(t < nums.size() && nums[t] == target)
                t++;
                ans[1]=t-1;
                return ans;

            }
            else if(nums[mid]<target)
            i=mid+1;
            else
            j=mid-1;

        }
        ans[0]=-1;
        ans[1]=-1;
        return ans;
    }
};