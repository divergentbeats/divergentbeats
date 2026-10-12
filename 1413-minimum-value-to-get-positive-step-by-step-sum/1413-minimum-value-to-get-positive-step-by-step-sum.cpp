class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minnum=0;
        int sum=0;
        for(int num:nums)
        {
            sum+=num;
            minnum=min(minnum,sum);
        }

        return 1-minnum;

        
    }
};