class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
     vector<int> result;
    int n = nums.size();
    int x=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        x=nums[i];
        for(int j=0;j<n;j++)
        {
            if(x>nums[j])
            count++;

        }
       result.push_back(count);
       count=0;
    }
    return result;
    }
};