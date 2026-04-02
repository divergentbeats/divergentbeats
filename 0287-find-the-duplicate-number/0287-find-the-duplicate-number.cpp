class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int dup=0;

        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i])!=mp.end())
            dup=nums[i];
            mp[nums[i]]++;
        }
        return dup;
    }
};