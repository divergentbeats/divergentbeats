class Solution {
public:
    int subtractProductAndSum(int n) {
        int s = n, sum = 0, product = 1;
        while(s>0)
        {
            int x  = s % 10;
            sum+=x;
            product*=x;
            s/=10;
        }
        int result = product - sum;
        return result;
        
    }
};