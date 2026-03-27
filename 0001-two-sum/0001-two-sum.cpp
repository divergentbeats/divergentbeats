class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size(),comp;
        vector<int> ans(2);
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            comp=target-nums[i];
            if(mp.find(comp)!=mp.end())
            {
                ans[0]=mp[comp];
                ans[1]=i;
            }
            mp[nums[i]]=i;

        }  
        return ans;
    }

};