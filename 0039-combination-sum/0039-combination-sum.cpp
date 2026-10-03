class Solution {
public:
    void bt(int start, vector<vector<int>>& ans, vector<int>& num, vector<int>& cur, int target)
    {
        if(target==0)
        {
        ans.push_back(cur);
        return;
        }
        for(int i=start;i<num.size();i++)
        {
            if(num[i]>target)
            return;
            cur.push_back(num[i]);
            bt(i,ans,num,cur,target-num[i]);
            cur.pop_back();
        }

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> cur;
        sort(candidates.begin(),candidates.end());
        bt(0, ans, candidates, cur,target);

        return ans;
        
    }
};