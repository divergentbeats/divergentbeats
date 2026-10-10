class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0, maxcount=0, i=0;
        int n=nums.size();
        while(i<n)
        {
            if(nums[i]==1)
            count++;
            else
            count=0;

            maxcount=max(maxcount,count);
            i++;
        }

        return maxcount;
        
    }
};