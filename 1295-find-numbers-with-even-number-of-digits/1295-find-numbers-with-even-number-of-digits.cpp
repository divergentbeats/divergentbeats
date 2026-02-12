class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=0,count=0,ans=0;
        int digit=0;
        n=nums.size();
        for(int i=0;i<n;i++)
        {
            digit=nums[i];
            while(digit>0)
            {
                digit=digit/10;
                count++;
            }
            if(count % 2==0)
            ans++;
            count=0;
            digit=0;
        }
        return ans;
    }
};