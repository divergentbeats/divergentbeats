class Solution {
public:
    int compress(vector<char>& chars) {
        string s="";
        char letter=chars[0];
        int count=1;
        for(int i=1;i<chars.size();i++)
        {
            if(chars[i]!=letter)
            {
                s+=letter;
                if(count>1)
                s+=to_string(count);
                letter=chars[i];
                count=1;
            }
            else
            count++;
        }
        s+=letter;
        if(count>1)
        s+=to_string(count);
        for(int i=0;i<s.size();i++)
        {
            chars[i]=s[i];
        } 

        return s.size();
    }
};