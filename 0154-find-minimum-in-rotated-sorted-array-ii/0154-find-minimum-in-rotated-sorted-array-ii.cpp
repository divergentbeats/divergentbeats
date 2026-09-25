class Solution {
public:
    int findMin(vector<int>& nums) {
        int minnum=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<minnum)
            minnum=nums[i];
        }
        return minnum;
        
    }
};