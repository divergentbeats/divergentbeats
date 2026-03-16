class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> ans(nums.size());
        ans[0]=1;
        int suffix=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            ans[i+1]=ans[i]*nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            ans[i]=ans[i]*suffix;
            suffix=suffix*nums[i];
        }
        return ans;
    }
};