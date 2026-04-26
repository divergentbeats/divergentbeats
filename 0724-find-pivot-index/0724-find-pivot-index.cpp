class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        int right = 0, left = 0;
        for(int x : nums)
        total+=x;

        for(int i=0 ;i<nums.size() ;i++)
        {
            right = total - left - nums[i];
            if(left == right)
            return i;

            left+=nums[i];
        }
        return -1;
    }
};