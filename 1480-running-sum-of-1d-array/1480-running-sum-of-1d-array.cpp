class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        int n= nums.size();
        for(int i=0;i<n;i++)
        {
            if(i==0)
            result.push_back(nums[i]);
            else
            result.push_back(result[i-1]+nums[i]);
        }
        return result;

    }
};