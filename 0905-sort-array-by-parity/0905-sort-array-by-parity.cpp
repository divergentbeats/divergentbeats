class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left=0, right=nums.size()-1;
        int temp;
        while(left<=right)
        {
            if(nums[right]%2!=0)
            right--;
            else if(nums[left]%2==0)
            left++;
            else if(nums[left]%2!=0 && nums[right]%2==0)
            {
                temp=nums[left];
                nums[left]=nums[right];
                nums[right]=temp;
                left++,right--;
            }
            else 
            left++,right--;
        }   
    return nums;
    }
};