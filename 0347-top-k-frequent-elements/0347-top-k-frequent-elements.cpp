class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> ans;
        int max=0;
        int freq=0;
        int i=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<k;i++)
        {
        for(auto &p:mp)
        {
            if(p.second>max)
            {
                max=p.second;
                freq=p.first;
            }
        }
        ans.push_back(freq);
        mp[freq]=0;
        max=0;
        }
        return ans;  
    }
};