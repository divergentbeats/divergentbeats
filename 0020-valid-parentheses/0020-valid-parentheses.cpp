class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        if(s.size()==0 || s.size()==1)
        return false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==')')
            {
                if(!p.empty() && p.top()=='(')
                p.pop();
                else
                p.push(s[i]);
            }
            else if(s[i]=='}')
            {
                if(!p.empty() && p.top()=='{')
                p.pop();
                else
                p.push(s[i]);

            }
            else if(s[i]==']')
            {
                if(!p.empty() && p.top()=='[')
                p.pop();
                else
                p.push(s[i]);
            }
            else
            p.push(s[i]);
        }
        if(p.empty())
        return true;
        return false;
    }
};