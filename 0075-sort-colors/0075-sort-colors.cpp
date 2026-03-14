class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0, key = 0, j = nums.size() - 1;

        while(key <= j)
        {
            if(nums[key] == 0)
            {
                swap(nums[i], nums[key]);
                i++;
                key++;
            }
            else if(nums[key] == 1)
            {
                key++;
            }
            else
            {
                swap(nums[key], nums[j]);
                j--;
            }
        }
    }
};