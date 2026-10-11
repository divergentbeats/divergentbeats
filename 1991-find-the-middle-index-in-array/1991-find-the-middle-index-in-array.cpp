class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        prefix[0] = nums[0];
        suffix[n-1] = nums[n-1];
        for(int i=1;i<nums.size();i++)
        {
            int num = nums[i] + prefix[i-1];
            prefix[i] = num;
        }
        for(int i=n-2;i>=0;i--)
        {
            int num = nums[i] + suffix[i+1];
            suffix[i] = num;
        }
        for(int i=0;i<n;i++)
        {
            if(prefix[i]==suffix[i])
            return i;
        }
        return -1;   
    }
};