class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left=0; int right=nums.size()-1;
        int temp=0;
        if(nums.size()!=0)
        {
        
            while(left<=right)
            {
                if( nums[left] % 2==0)
                left++;
                else if( nums[right] % 2==0)
                {
                    temp=nums[left];
                    nums[left]=nums[right];
                    nums[right]=temp;
                    left++,right--;

                }
                else if(nums[left]%2!=0 && nums[right]%2!=0)
                right--;
            
            }
        
        }
        return nums;
        
    }
};