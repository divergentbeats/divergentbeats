class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        mp[nums[i]]++;
        int maxelement=0, maxfreq=0;
        for(auto i:mp)
        {
            if(i.second>maxfreq)
            {
                maxfreq=i.second;
                maxelement=i.first;
            }
        }

        return maxelement;
        
    }
};