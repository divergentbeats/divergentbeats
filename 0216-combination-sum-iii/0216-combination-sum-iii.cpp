class Solution {
public:

    void bt(int start, vector<int> &a, vector<int> &cur, vector<vector<int>> &ans, int k, int n)
    {
        if(cur.size()==k && n==0)
        ans.push_back(cur);

        for(int i=start;i<a.size();i++)
        {
            cur.push_back(a[i]);
            bt(i+1,a,cur,ans,k,n-a[i]);
            cur.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> a;
        for(int i=0;i<9;i++)
        a.push_back(i+1);
        vector<int> cur;
        vector<vector<int>> ans;
        bt(0,a,cur,ans,k,n);
        return ans;
        
    }
};