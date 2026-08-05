class Solution {
public:
    bool checkPerfectNumber(int num) {
        int s = num, sum = 0;
        for(int i=1;i<s;i++)
        {
            if(s%i==0)
            sum+=i;

        }
        if(sum==num)
        return true;

        return false;
        
    }
};