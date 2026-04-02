class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int dup=nums[0];
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i])
            dup=nums[i];
        }
        return dup;  
    }
};