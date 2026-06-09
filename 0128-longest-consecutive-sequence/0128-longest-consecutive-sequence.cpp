class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        mp[nums[i]]++;
        int maxcount = 0;

        for(auto it:mp)
        {
            if(mp.find(it.first-1)==mp.end())
          {
            int freq = it.first;
            int count=0;
            
            while(mp.find(freq)!=mp.end())
            {
                freq++, count++;
            }
            maxcount = max(count,maxcount);
          }

        }
        return maxcount;
        
    }
};