class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int pro=1;
        int ans;
        int digit;
        while(n>0)
        {
          digit = n % 10;
          sum=sum+digit;
          pro=pro*digit;
          n=n/10;
        }
        ans = pro-sum;
        return ans;
        
    }
};