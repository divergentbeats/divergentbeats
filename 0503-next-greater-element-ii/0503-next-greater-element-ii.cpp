class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            mp[i]=-1;
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]>nums[i])
                {
                mp[i]=j;
                break;
                }
            }
            if(mp[i]==-1)
            {
            for(int j=0;j<i;j++)
            {
                if(nums[j]>nums[i])
                {
                mp[i]=j;
                break;
                }
            }
            }  
        }

        vector<int> ans(n);
        for(int i=0;i<n;i++)
        {
            if(mp[i]==-1)
            ans[i]=-1;
            else
            ans[i]=nums[mp[i]];
        }

        return ans;
    }
};