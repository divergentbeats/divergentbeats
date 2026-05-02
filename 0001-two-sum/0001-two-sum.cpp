class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        unordered_map<int,int> mp;
        int n =nums.size();
        int comp = 0;
        for(int i=0;i<n;i++)
        {
            comp = target - nums[i];
            if(mp.find(comp)!=mp.end())
            {
            ans[0] = mp[comp];
            ans[1] = i;
            return ans;
            }
            mp[nums[i]]=i; 
        }
        return ans;   
    }
};