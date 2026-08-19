class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        mp[nums[i]]++;
        int maxnum = mp[nums[0]];
        while(k>0)
        {
        int maximum = 0, maxfreq = 0;
        for(auto i:mp)
        {
            if(i.second>maxfreq)
            {
                maxfreq = i.second;
                maximum = i.first;
            }

        }
        ans.push_back(maximum);
        mp.erase(maximum);
        k--;
        }

        return ans;
        
    }
};