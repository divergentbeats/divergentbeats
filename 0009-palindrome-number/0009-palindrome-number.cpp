class Solution {
public:
    bool isPalindrome(int x) {
        int count = 0; 
        long n = 0, s = x;
        while(s>0)
        {
            int z = s % 10;
            n = n*10 + z;
            count++;
            s/=10;

        }
        if(n == x)
        return true;

        return false;

        
    }
};