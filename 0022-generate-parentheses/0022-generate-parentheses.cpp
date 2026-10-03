class Solution {
public:

    void bt(string &current, int open, int close, vector<string> &ans,int n)
    {
        if(current.size()==(2*n))
        {
            ans.push_back(current);
            return;
        }
        if(open<n)
        {
            current.push_back('(');
            bt(current,open+1,close,ans,n);
            current.pop_back();
        }
        if(close<open)
        {
            current.push_back(')');
            bt(current,open,close+1,ans,n);
            current.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string cur="";
        bt(cur,0,0,ans,n);
        return ans;
    }
};