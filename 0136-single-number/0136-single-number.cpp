class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=0;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        for(int j=0;j<nums.size();j++)
            {
            if(mp[nums[j]]==1)
            n=nums[j];
            }
        return n;
    }
};