class Solution {
public:
    void bt(int start, vector<int> &cur, vector<int> &a, vector<vector<int>> &ans, int k)
    {
        if(cur.size()==k)
        {
        ans.push_back(cur);
        return;
        }
        for(int i=start;i<a.size();i++)
        {
            cur.push_back(a[i]);
            bt(i+1,cur,a,ans,k);
            cur.pop_back();
        }
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> a;
        for(int i=0;i<n;i++)
        a.push_back(i+1);
        vector<int> cur;
        vector<vector<int>> ans;
        bt(0,cur,a,ans,k);

        return ans;
        
    }
};