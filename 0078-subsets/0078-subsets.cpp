class Solution {
public:

    void bt(int start, vector<int>& nums, vector<vector<int>>& ans, vector<int> cur)
    {
        ans.push_back(cur);
        for(int i=start;i<nums.size();i++)
        {
            cur.push_back(nums[i]);
            bt(i+1,nums,ans,cur);
            cur.pop_back();
        }

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        bt(0,nums,ans,curr);
        return ans;
        
        
    }
};