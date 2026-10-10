class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last=digits.size()-1;
        if(digits[last]<9)
        {
            digits[last]+=1;
            return digits;
        }
        else if(digits[last]==9)
        {
            int i=last;
            while(i>=0)
            {
                if(digits[i]==9)
                {
                    digits[i]=0;
                    i--;
                }
                else
                {
                    digits[i]+=1;
                    return digits;
                }
            }
            digits[0]=1;
            digits.push_back(0);
            
        }
        return digits;
        
    }
};