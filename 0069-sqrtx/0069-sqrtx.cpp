class Solution {
public:
    int mySqrt(int x) {
        long i=0;
        long ans;
        while(i*i <= x)
        {
            ans=i;
            i++;
        }
        return ans;
    }
};