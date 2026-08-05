class Solution {
public:
    int reverse(int x) {

        long long rev = 0;
        long long s = x;
        if(x<0)
        {
         s = -s;
         while(s>0)
        {
            rev = (rev*10) + (s%10);
            s/=10;
        }
        }
        else if(x>0)
        {
            s = x;
             while(s>0)
        {
         
            rev = (rev*10) + (s%10);
            s/=10;
        }
        }
        if(x<0)
        rev = rev*(-1);

        long long newn = pow(2,31);

        if(rev > newn-1)
        return 0;
        if(rev < -newn)
        return 0;

        return rev;
        
    }
};