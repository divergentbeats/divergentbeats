class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> ans;
        int freq=1,max=0;
        for(int i=0;i<nums.size();i++)
        mp[nums[i]]++;
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
            mp.erase(freq);
            max=0;
        }
        return ans;
        
    }
};