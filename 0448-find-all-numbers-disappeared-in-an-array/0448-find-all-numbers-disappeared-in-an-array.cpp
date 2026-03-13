class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        int j=1;
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        while(j<=nums.size())
        {
            if(mp[j]==0)
            ans.push_back(j);
            j++;
        }
        return ans;
        
    }
};