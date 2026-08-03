class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        ans^=nums[i];
        int ans1 = 0;
        for(int i=1;i<=nums.size();i++)
        ans1^=i;

        int res = ans ^ ans1;

        return res;
        
    }
};