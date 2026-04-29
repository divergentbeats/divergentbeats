class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int prev1 = 0, prev2=0, temp=0;

        for(int num:nums)
        {
            temp = max(prev1, prev2 + num);
            prev2 = prev1;     //Storing the num value in prev2 
            prev1 = temp;      //Max amount
        }
        return prev1;
        
    }
};