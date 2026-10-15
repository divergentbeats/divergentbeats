class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        bool detect=true;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(!isalnum(s[i]) && detect==true)
            continue;
            else if(!isalnum(s[i]) && detect==false)
            break;
            else
            {
            count++;
            detect=false;
            }
        }

        return count;
        
    }
};