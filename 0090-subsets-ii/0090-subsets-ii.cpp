class Solution {
public:
    void bt(int start, vector<vector<int>> &ans, vector<int> &cur, vector<int> &nums)
    {
        if(find(ans.begin(),ans.end(),cur)==ans.end())
        {
            ans.push_back(cur);
        }
        else
        return;
        
        for(int i=start;i<nums.size();i++)
        {
            cur.push_back(nums[i]);
            bt(i+1,ans,cur,nums);
            cur.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> cur;
        sort(nums.begin(),nums.end());
        bt(0,ans,cur,nums);
        return ans;

        
    }
};