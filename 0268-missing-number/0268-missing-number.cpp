class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int expectedsum=0, sum=0;
        for(int i=0;i<=nums.size();i++)
        expectedsum+=i;
        for(int i=0;i<nums.size();i++)
        sum+=nums[i];
        return {expectedsum-sum};
        
    }
};