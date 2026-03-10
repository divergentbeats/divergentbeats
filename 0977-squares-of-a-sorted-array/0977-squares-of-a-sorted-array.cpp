class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0, right=nums.size()-1;
        vector<int> ans(nums.size());
        int pos=nums.size()-1;
        while(left<=right)
        {
            if(abs(nums[left])<abs(nums[right]))
            {
                ans[pos]=nums[right];
                pos--;
                right--;
            }
            else
            {
                ans[pos]=nums[left];
                left++;
                pos--;
            }
        }
        for(int i=0;i<ans.size();i++)
        {
        ans[i]=ans[i]*ans[i];
        }
      
       return ans;

    }
};