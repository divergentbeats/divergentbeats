class Solution {
public:
    bool checkOnesSegment(string s) {
        int flag=0;
        if(s.size()==1 && s[0]=='1') 
            return true;
        for(int i=0;i<s.size()-1;i++)
            {
                
                if(flag==1 && s[i+1]=='1')
                    return false;
                if(s[i]=='1' && s[i+1]=='0')
                    flag=1;
            }
        return true;
        
    }
};