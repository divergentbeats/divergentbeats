class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> nums;
        int n = x;
        int left=0,right=0;
        while(n!=0)
        {
          if(n<0)
          return false;
          else
          { 
        nums.push_back(n % 10);
        n=n/10;
          }
        }
        right=nums.size()-1;
        while(left<right)
        {
            if(nums[left]!=nums[right])
            return false;
            left++,right--;

        }
        return true;

        
    }
};