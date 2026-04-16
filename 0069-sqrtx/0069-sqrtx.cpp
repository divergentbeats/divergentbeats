class Solution {
public:
    int mySqrt(int x) {
        long left = 0, right = x;
        int ans = 0;

        while(left <= right) {
            long mid = (left + right)/ 2;

            if(mid <= x / mid) {
                ans = mid;          
                left = mid + 1;     
            }
            else {
                right = mid - 1;    
            }
        }

        return ans;
    }
};