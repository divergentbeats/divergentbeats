class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0, temp = 0;
        for(int i=0;i<nums.size();i++)
        {
            temp = 0;
            int x = nums[i];
            while(x>0)
            {
                x/=10;
                temp++;
            }
            if(temp%2==0)
            count++;

        }

        return count;
        
    }
};