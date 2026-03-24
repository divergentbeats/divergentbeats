class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
           int current=target-nums[i];
            if(mp.find(current)!=mp.end())
            { 
                return {mp[current],i};
            }
            mp[nums[i]]=i;
        }
        return {};     
    }
};