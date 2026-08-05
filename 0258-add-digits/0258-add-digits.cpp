class Solution {
public:
    int addDigits(int num) {
        int s = num;
        int sum = 0;
        while(s>0)
        {
            int x = s % 10;
            sum+=x;
            s/=10;
        }
        if(sum>=10)
        return addDigits(sum);

        return sum;
    }
};