class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> mp;
        int current=0;
        for(int i=0;i<nums.size();i++)
        {
            current=target-nums[i];
            if(mp.find(current)!=mp.end())
            { 
                return {mp[current],i};
            }
            mp[nums[i]]=i;
        }
        return {};     
    }
};