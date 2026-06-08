class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0, write=0, j=0, count=0;
        string str;
        while(i <chars.size())
        {
            j = i;
            count = 0;
            char curr = chars[i];
            while(j<chars.size() && chars[j] == curr)
            {
                count++, j++;

            }
            chars[write++] = curr;
            if(count>1)
            {
            str = to_string(count);
            for(char ch:str)
            chars[write++]=ch;
            }
            i = j;
        }
        return write;  
      
    }
};