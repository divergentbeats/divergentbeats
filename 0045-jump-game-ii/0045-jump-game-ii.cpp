class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int k , max, i=0, x=0;
        int count = 0;
        while(i < n-1)
        {
            int j = min(n-1, i + nums[i]);
            k = i + 1, max = i;
            while(k <= j)
            {
                if((k + nums[k]) > max)
                {
                max = k + nums[k];
                x = k;
                }
                k++;
                
            }
            count++;
            if (j >= n - 1)
                break;
            i = x;
        }
        return count;
        
    }
};